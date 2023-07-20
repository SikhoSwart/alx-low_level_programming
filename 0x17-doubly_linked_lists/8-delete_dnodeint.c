#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index of a linked list
 * @head: pointer to head
 * @index:index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;

	h = *head;
	if (!(*head))
	{
		return (-1);
	}
	for (; index != 0; index--)
	{
		if (!h)
		{
			return (-1);
		}
		h = h->next;
	}
	if (h == *head)
	{
		*head = h->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		h->prev->next = h->next;
		if (h->next != NULL)
		{
			h->next->prev = h->prev;
		}
	}
	free(h);
	return (1);
}
