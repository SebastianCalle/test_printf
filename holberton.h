#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char * const format, ...);
int check_case(int i, const char * const format, va_list print);
/**
 * struct print_type - struct of the print all
 * @c: string char
 * @f: pointer to function
 */
typedef struct print_type
{
	char *c;
	int (*f)();
} print_f;
int print_c(va_list print);
int print_s(va_list print);
int print_fl(va_list print);
int print_i(va_list print);
int print_d(va_list print);
int _puts(char *str);
int _putchar(char c);
int _strlen(char *s);
int _puts(char *s);
char *convert(unsigned int num, int base);
#endif
