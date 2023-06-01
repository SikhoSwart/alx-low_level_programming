#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to head of list_t
 * @str: string to be added
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *node, *tmp;

	len = 0;
	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	if (!str)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	if (!*head)
	{
		*head = node;
	}
	else
	{
		tmp = *head;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = node;
	}
	return (*head);

}
