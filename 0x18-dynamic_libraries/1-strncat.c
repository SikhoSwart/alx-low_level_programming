#include "main.h"
/**
 * *_strncat -  concatenates two strings
 *
 * @dest: pointer to 1st string
 * @src: pointer to 2nd string
 * @n: bytes
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	for (i = 0; dest[i] != 0; i++)
	{
		len++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
