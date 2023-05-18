#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elemnts
 * @size: bytes
 * Return: pointer or null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	i = 0;
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
		((char *)p)[i] = 0;
		i++;
	}
	return (p);
}
