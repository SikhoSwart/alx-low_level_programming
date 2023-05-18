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
	unsigned int i = 0, j = 0, k, l = 0;
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
		n = j;
	}
	conc_str = malloc(sizeof(char) * (i + n + 1));
	if (!conc_str)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (k = 0; s1[k] != '\0'; k++)
		{
			conc_str[k] = s1[k];
		}
	}
	if (s2 != NULL)
	{
		while (s2[l] && l < n)
		{
			conc_str[k] = s2[l];
			l++;
			k++;
		}
	}
	conc_str[k] = '\0';
	return (conc_str);
}
