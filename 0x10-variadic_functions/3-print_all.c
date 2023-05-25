#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str, *separator;

	va_start(args, format);
	i = 0;
	separator = "";
	while (format[i])
	{
		if (format[i] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			printf("%s%s", separator, str);
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
