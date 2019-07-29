#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - print anything
 * @format: type of format
 * Return: the lenght of print
 */
int _printf(const char * const format, ...)
{
	int i = 0, len = 0;
	va_list print;

	va_start(print, format);
	if (format == NULL || (format[i] == '%' && format[i + 1] == '\0'))
		return (-1);
	while (format != NULL && format[i])
	{
		if (format[i] != '%')
			len += _putchar(format[i]);
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				len += _putchar('%');
				if (format[i + 2] == '%')
					i += 2;
			}
			len += check_case(i, format, print);
			i++;

		}

	i++;
	}
	printf("\n");
	va_end(print);
	return (len);
}
