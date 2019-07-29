#include "holberton.h"
/**
 * print_str - Prints a string.
 * @arg: A list pointing to string to print.
 */
void print_str(va_list arg)
{
	int j, i;
	char n[] = "(null)";
	char *s = va_arg(arg, char *);

	j = 0;
	if (s == NULL)
	{
		for (i = 0; n[i] != '0'; i++)
			_putchar(n[i]);
		return;
	}
	for (j = 0; s[j] != '\0'; j++)
		_putchar(s[j]);
}
