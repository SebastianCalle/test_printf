#include "holberton.h"
/**
 * print_char - Prints a char.
 * @arg: A list pointing to char to print.
 */
void print_char(va_list arg)
{
	int c;

	c = va_arg(arg, int);
	_putchar(c);
}
