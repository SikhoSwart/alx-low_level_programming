#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head
 * @idx: index of the list
 * @n: new node
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp;

	temp = *h;
	node = malloc(sizeof(dlistint_t));
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (!temp)
		{
			return (NULL);
		}
	}
	if (!(temp->next))
	{
		return (add_dnodeint_end(h, n));
	}
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = temp;
	node->next = temp->next;
	temp->next->prev = node;
	temp->next = node;
	return (node);
}
