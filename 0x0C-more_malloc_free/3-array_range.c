#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to array or NULL  on failure
 */
int *array_range(int min, int max)
{
	int *arr, i = 0;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
