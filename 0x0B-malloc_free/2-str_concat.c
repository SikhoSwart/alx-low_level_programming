#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string or null
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conc_str;

	i = 0;
	j = 0;
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	conc_str = malloc((i + j + 1) * sizeof(char));
	if (conc_str != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			conc_str[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			conc_str[i] = s2[j];
			i++;
		}
	}
	conc_str[i] = '\0';
	return (conc_str);
}
