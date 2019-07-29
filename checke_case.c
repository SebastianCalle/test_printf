#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * check_case - check the case of %
 * @format: type of format
 * @i: index of format
 * @print: va_list
 * Return: lenght
 */
int check_case(int i, const char * const format, va_list print)
{
	int j, len;
	print_f pp[] = {
		{"%c", print_c},
		{"%i", print_i},
		{"%d", print_d},
		{"%s", print_s},
	};

	j = 0;
	len = 0;
	while (j < 4)
	{
		if (format[i] == pp[j].c[0])
		{
			if (format[i + 1] == pp[j].c[1])
			{
				len += pp[j].f(print);
				i++;
			}
		}
		j++;
	}
	return (len);
}
