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
	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
