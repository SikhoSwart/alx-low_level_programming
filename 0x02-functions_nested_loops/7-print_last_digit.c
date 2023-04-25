#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: integer value
 *
 * Return: value of the last digit
 */
int print_last_digit(int num)
{
	int i;

	i = num % 10;
	if (num < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
