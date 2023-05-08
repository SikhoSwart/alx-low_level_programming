#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of two diagonals of square matrix
 *
 * @a: matrix
 * @size: size of matrix
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, k, size2, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	k = 0;
	size2 = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 = sum1 + a[k];
			}
			if (j == size2)
			{
				sum2 = sum2 + a[k];
			}
			k++;
		}
		size2--;
	}
	printf("%i, %i\n", sum1, sum2);
}
