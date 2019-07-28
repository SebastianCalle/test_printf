#ifndef VAR_H
#define VAR_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int _printf(const char * const format, ...);
char *print_char(va_list l);
char *print_str(va_list l);
char *print_int(va_list l);
char *print_bin(va_list l);
char *print_octal(va_list l);
char *print_hex(va_list l);
char *print_hexcaps(va_list l);
int _putchar(char c);


/**
 * struct op - Struct op
 *@pt: A function pointer prints
 * @s: The function associated
 */
typedef struct op
{
	char *s;
	void (*pt)(va_list arg);
} abc;

#endif
