#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: poniter to head
 * @index:  index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *now;

	tmp = *head;
	if (!tmp)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		if (!(tmp->next))
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	now = tmp->next;
	tmp->next = now->next;
	free(now);
	return (1);


}
