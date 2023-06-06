#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list
 * @head: pointer to head
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
