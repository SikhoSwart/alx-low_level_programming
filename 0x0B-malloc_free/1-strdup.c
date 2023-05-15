#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocates new space in memory for duplicate string
 * @str: string
 * Return: pointer to duplicate string or null
 */
char *_strdup(char *str)
{
	int i, j;
	char *dupl_str;

	if (str == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	dupl_str = (char *)malloc((j + 1) * sizeof(char));
	if (dupl_str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			dupl_str[i] = str[i];
		}
	}
	dupl_str[i] = '\0';
	return (dupl_str);
}
