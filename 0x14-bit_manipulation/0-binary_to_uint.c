#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int conv, num;
	int i, j;

	i = 0;
	num = 1;
	conv = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (j = 0; b[j] != '\0' ; j++)
	{
		i++;
	}
	for (i--; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		conv =  conv + ((b[i] - '0') * num);
		num = num * 2;
	}
	return (conv);
}
