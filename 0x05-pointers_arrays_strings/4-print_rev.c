#include "main.h"
/**
 * print_rev - prints a string, in reverse
 *
 * @s: string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, len, j;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len; j > 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
