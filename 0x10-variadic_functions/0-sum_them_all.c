#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of args to add
 * Return: sum of paramters or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list para;
	int sum;
	unsigned int i;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(para, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(para, int);
	}
	va_end(para);
	return (sum);
}
