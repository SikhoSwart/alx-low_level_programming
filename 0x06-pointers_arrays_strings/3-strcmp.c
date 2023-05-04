#include "main.h"
/**
 * _strcmp -  compares two strings
 *
 * @s1: pointer to 1st string
 * @s2: pointer to 2nd string
 *
 * Return: integer less than , equal to or greater than 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1 - s2);
		}
	}
	return (0);
}
