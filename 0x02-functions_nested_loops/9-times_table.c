#include "main.h"
/**
 * times_table - prints the 9 times table, from 0
 *
 *Return: nothing
 */
void times_table(void)
{
	int i, j, m;

	i = 0;
	for (i = 0; i <= 9; i++)
	{
		j = 0;
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (j == 0)
			{
				_putchar(m + 48);
			}
			else if (m < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + 48);
			}
			else if (m >= 10)
			{
				_putchar(',');
				 _putchar(' ');
				  _putchar(m / 10 + 48);
				   _putchar(m % 10 + 48);

			}
		}
		_putchar('\n');
	}
}
