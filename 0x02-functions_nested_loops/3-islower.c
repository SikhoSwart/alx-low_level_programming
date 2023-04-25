#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 *@c: character in ascii
 *
 * Return: 1 for lowercase, 0 otherwie
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
