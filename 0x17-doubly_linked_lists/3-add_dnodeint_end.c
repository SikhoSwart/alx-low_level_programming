#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head
 * @n: new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *h;

	h = *head;
	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head != NULL)
	{
		while (h->next)
		{
			h = h->next;
		}
		h->next = node;
	}
	else
	{
		*head = node;
	}
	node->prev = h;
	return (node);
}
