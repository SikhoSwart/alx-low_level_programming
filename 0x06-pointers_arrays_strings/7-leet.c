#include "main.h"
/**
 * *leet -  encodes a string into 1337
 *
 * @str: pointer to string
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char lett[] = "AaEeOoTtLl";
	char num[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (lett[j] == str[i])
			{
				str[i] = num[j];
			}
		}
	}
	return (str);
}
