#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of list
 * @index: node index
 * Return: address of nth node, if node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
