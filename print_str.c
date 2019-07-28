#include "holberton.h"
/**
 * print_str - Prints a string.
 * @arg: A list pointing to string to print.
 */

void *print_str(va_list l)
{
	char *p = va_arg(l, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}
