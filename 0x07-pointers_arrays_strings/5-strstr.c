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
	for (; *haystack != '\0'; haystack++)
	{
		char *hptr = haystack;
		char *nptr = needle;

		while (*hptr == *nptr && *nptr != '\0')
		{
			hptr++;
			nptr++;
		}
		if (*nptr == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
