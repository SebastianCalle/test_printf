#include "holberton.h"
/**
 * print_i - print decimal numbers
 * @print: argument
 * Return: the count of print
 */
int print_i(va_list print)
{
	int i, c;

	i = va_arg(print, int);
	c = 0;
	if (i < 0)
	{
		i = -i;
		_putchar('-');
		c++;
	}
	c += _puts(convert(i, 10));
	return (c);
}
/**
 * print_d - print decimal numbers
 * @print: argument
 * Return: the count of print
 */
int print_d(va_list print)
{
	int i, c;

	i = va_arg(print, int);
	c = 0;
	if (i < 0)
	{
		i = -i;
		_putchar('-');
		c++;
	}
	c += _puts(convert(i, 10));
	return (c);
}
/**
 * convert - convert the num in base of parameter
 * @num: num to convert
 * @base: base from convert
 * Return: pointer convert
 */
char *convert(unsigned int num, int base)
{
	static char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
