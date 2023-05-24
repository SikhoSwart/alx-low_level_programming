#include "function_pointers.h"
/**
 * array_iterator - iterates an array
 * @array: the array
 * @size: size of array
 * @action:pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
