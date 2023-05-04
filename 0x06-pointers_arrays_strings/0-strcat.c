#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer
 * @src: pointer
 *
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int i;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}

	dest[len] = '\0';
	return (dest);
}

