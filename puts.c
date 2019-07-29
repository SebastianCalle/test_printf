#include "holberton.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 * Return: the count of string
 */
int _puts(char *str)
{
	int c;

	c = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		c++;
	}
	return (c);
}
