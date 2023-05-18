#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: pointer to resulting string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *conc_str;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (n >= j)
	{
		conc_str = malloc(sizeof(char) * (i + j + 1));
	}
	else if (n < j)
	{
		conc_str = malloc(sizeof(char) * (i + n + 1));
	}
	if (conc_str == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			conc_str[i] = s1[i];
		}
	}
	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0' && j < n)
		{
			conc_str[i] = s2[j];
			i++;
			j++;
		}
	}
	conc_str[i] = '\0';
	return (conc_str);
}
