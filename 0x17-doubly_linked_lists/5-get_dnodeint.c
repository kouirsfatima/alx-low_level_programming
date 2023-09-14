#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    	dlistint_t *str = head;
	unsigned int ptr = 0;

while (str != NULL)
	{
		if (ptr == index)
		{
			return (str);
		}

		str = str->next;
		ptr++;
	}
	return (NULL);
}