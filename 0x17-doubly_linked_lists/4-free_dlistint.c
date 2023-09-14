#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_dlistint(dlistint_t *head)
{
    while (head != NULL && head->next != NULL)
    {
        head = head->next;
        free(head->prev);
    }
    free(head);
}
