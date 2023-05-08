#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer if substring found, null if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[0])
			{
				return (&haystack[i]);
			}
		}
	}
	return ('\0');
}
