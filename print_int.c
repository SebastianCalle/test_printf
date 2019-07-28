#include "holberton.h"
/**
 * print_int - Prints a integer.
 * @arg: A list pointing to int to print.
 */

void *print_int(va_list l)
{
	printf("%d", va_arg(l, int));
}
