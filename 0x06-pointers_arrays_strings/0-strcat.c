#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer to 1st string
 *
 * @src: pointer to 2nd string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	i = 0;
	while ( src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
