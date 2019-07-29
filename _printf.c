#include "holberton.h"
/**
 * _printf - print output according to a format
 *@format: first argument
 * Return: the number of characters printed(excluding the null byte)
 */
int _printf(const char *format, ...)
{
	int i, j, len;
	va_list jan;
	abc funcs[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int}
		//{'u', print_uint},
		//{'o', print_octal},
		//{'b', print_bin},
		//{'x', print_hex},
		//{'X', print_hexM}
	};

	i = 0;
	va_start(jan, format);
	len = _strlen((char *)format);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	while (format != NULL && format[i])
	{
		if (format[i] != '%' && format[i - 1] != '%')
			_putchar(format[i]);
		else
		{
			j = 0;
			while (j < 4)
			{
				if (format[i + 1] == funcs[j].flagS)
				{
					funcs[j].pt(jan);
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(jan);
	return (len);
}
