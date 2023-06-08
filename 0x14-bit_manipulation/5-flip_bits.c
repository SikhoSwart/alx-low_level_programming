#include "main.h"
/**
 * flip_bits - returns the number of bits needed to flip to another number
 * @n: number
 * @m: number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits;
	unsigned long int xor;

	xor = n ^ m;
	for (bits = 0; xor > 0;)
	{
		if ((xor & 1) == 1)
		{
			bits++;
		}
		xor = xor >> 1;
	}
	return (bits);
}
