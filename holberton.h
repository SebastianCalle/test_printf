#ifndef VAR_H
#define VAR_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);

void print_char(va_list arg);
void print_int(va_list arg);
void print_uint(va_list arg);
void print_str(va_list arg);
void print_octal(va_list arg);
void print_bin(va_list arg);
void print_hex(va_list arg);
void print_hexM(va_list arg);





/**
 * struct op - Struct op
 * @pt: A function pointer prints
 * @flagS: The function associated
 * we use a structure matrix. the structure contains 
 * a char (corresponding to the flag) and a pointer to function.
 */
typedef struct op
{
	char flagS;
	void (*pt)(va_list arg);
} abc;


#endif
