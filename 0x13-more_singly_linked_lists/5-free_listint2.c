#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to listint_t
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	tmp = *head;
	if (head != NULL)
	{
		while (*head)
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
		}
	}
	*head = NULL;
}