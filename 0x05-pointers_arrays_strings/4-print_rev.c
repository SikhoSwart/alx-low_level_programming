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
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	for (len--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
