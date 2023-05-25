#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(num);
}
