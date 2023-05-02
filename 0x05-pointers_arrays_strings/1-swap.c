#include "main.h"
/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to an integer
 *
 * @b: pointer to an integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp1, temp2;

	temp1 = *a;
	temp2 = *b;
	*a = temp2;
	*b = temp1;
}
