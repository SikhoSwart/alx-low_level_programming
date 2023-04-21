#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char l_alph;
	char u_alph;

	for (l_alph = 97; l_alph <= 122; l_alph++)
	{
		putchar(l_alph);
	}
	for (u_alph = 65; u_alph <= 90; u_alph++)
	{
		putchar(u_alph);
	}
	putchar('\n');
	return (0);
}
