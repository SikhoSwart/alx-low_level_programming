#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int num;

	num = 0;
	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				num++;
			}
		}
	}
	return (num);
}
