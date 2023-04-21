#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char alph;

	for (alph = 97; alph <= 122; alph++)
	{
		if (alph == 101 || alph == 113)
		{
			continue;
		}
		putchar(alph);

	}
	putchar('\n');
	return (0);
}
