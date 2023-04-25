#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times, in lowercase
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i = 0, alph;

	while (i < 10)
	{
		alph = 97;
		while (alph < 123)
		{
			_putchar(alph);
			alph++;
		}
		_putchar('\n');
		i++;
	}
}
