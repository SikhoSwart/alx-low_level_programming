#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elemnts in array
 * @size: bytes
 * Return: pointer to allocated memory or null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (size * nmemb))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
