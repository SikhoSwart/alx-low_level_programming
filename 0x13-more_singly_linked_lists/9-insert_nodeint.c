#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head
 * @idx: index of the list where the new node should be added
 * @n: node to insert
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	listint_t *tmp;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	tmp = *head;
	if (!head)
	{
		return (NULL);
	}
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = tmp;
		*head = node;
		return (node);
	}
	for (i = 0; i < (idx - 1); i++)
	{
		tmp = tmp->next;
	}
	node->next = (*head)->next;
	tmp->next = node;
	return (node);
}
