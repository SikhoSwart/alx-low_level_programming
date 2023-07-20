#include "lists.h"
/**
 * sum_dlistint - add all the data (n) of a dlistint_t linked list
 * @head: head of list
 * Return: sum of data, if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int add;

	add = 0;
	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
