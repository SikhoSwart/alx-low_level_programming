#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: an array of integers
 * @n: number of elements in array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;
	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
