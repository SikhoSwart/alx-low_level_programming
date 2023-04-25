#include "main.h"
/**
 * print_alphabet -  print the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 97; alph <= 122; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return;
}
