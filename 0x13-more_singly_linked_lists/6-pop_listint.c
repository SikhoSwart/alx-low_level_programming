#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head
 * Return: head node’s data (n) or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data = tmp->n;
	*head = tmp->next;
	free(tmp);
	return (data);

}
