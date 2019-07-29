#include <stdarg.h>
#include "holberton.h"
/**
 * print_c - print character
 * @print: argument
 * Return: the count of print
 */
int print_c(va_list print)
{
	char c;
	int count = 0;

	c = va_arg(print, int);
	_putchar(c);
	count++;

	return (count);
}
/**
 * print_s - print string
 * @print: argument
 * Return: the count of print
 */
int print_s(va_list print)
{
	int i, count;
	char n[] = "(nil)";
	char *s;

	s = va_arg(print, char*);
	count = 0;
	if (s == NULL)
	{
		for (i = 0; n[i] != '0'; i++)
		{
			_putchar(n[i]);
			count++;

		}
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
