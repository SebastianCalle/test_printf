#include "holberton.h"
/**
 * print_int - Prints a integer.
 * Return: no return
 */
void print_int(va_list arg)
{

	char l;
	int r;
	char d;
	int n = va_arg(arg, int);

	if (n < 0)
	{
		_putchar('-');
		l = ('0' - (n % 10));
		n /= -10;
	} else
	{
		l = ((n % 10) + '0');
		n /= 10;
	}
	r = 0;
	while (n > 0)
	{
		r = r * 10 + (n % 10);
		n /= 10;
	}

	while (r > 0)
	{
		d = ((r % 10) + '0');
		_putchar (d);
		r /= 10;
	}
	_putchar(l);
}
