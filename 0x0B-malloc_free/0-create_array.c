#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: number of bytes
 * @c: character
 *Return: pointer to array or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (arr != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
	}
	return (arr);
}
