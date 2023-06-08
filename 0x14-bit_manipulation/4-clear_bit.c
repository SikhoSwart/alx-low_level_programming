#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int val;

	if (index > (sizeof(unsigned int) * 16))
	{
		return (-1);
	}
	val = 1 << index;
	*n = (~val) & (*n);
	return (1);
}
