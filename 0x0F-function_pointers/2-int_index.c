#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search from
 * @size: size of array
 * @cmp: pointer to function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
