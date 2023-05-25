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
		switch (format[i])
		{
			case 'c':
				{
					printf("%s%c", separator, va_arg(args, int));
					break;
				}
			case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
			case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
			case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						printf("(nil)");
					printf("%s%s", separator, str);
					break;
			default:
					i++;
					continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
