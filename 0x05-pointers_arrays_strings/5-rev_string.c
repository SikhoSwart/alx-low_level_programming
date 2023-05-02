#include "main.h"
/**
 * rev_string - reverses a string
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, len;
	char temp = s[0];

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
