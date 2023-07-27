#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp = *head;
	size_t ptr = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	while (str[ptr] != '\0')
	{
		ptr++;
	}
	new_node->len = ptr;
	new_node->next = NULL;

	if (tmp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}

	return (*head);
}
