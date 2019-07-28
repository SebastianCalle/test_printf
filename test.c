#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void _printf(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_uint(va_list arg);
void print_str(va_list arg);
void print_octal(va_list arg);
void print_bin(va_list arg);
void print_hex(va_list arg);
void print_hexM(va_list arg);
int _putchar(char c);

/**
 * struct op - Struct op
 *@pt: A function pointer prints
 * @flagS: The function associated
 * we use a structure matrix. the structure contains 
 * a char (corresponding to the flag) and a pointer to function.
 */
typedef struct op
{
	char *flagS;
	void (*pt)(va_list arg);
} abc;

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	_printf("ceis", 'H', 0, "lberton");
	return (0);
}
/**
 * print_all - prints all arguments passed to it
 * @format: list of argument types
 * Return: void
 */
void _printf(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	int j, i = 0;
	abc funcs[] = {
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int},
		{"u", print_uint},
		{"o", print_octal},
		{"b", print_bin},
		{"x", print_hex},
		{"X", print_hexM},
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 9 && format[i] != *(funcs[j].flagS))
			j++;
		if (j < 9)
		{
			printf("%s", separator);
			funcs[j].pt(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


/**
 * print_char - Prints a char.
 * @arg: A list pointing to char to print.
 */
void print_char(va_list arg)
{
	/*printf("%c", (char) va_arg(arg, int));*/
	char cc = va_arg(arg, int);
	_putchar(cc);
}



/**
 * print_int - Prints a integer.
 * @arg: A list pointing to int to print.
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));

}





/**
 * print_uint - Prints a float.
 * @arg: A list pointing to float to print.
 */
void print_uint(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}




/**
 * print_str - Prints a string.
 * @arg: A list pointing to string to print.
 */

void print_str(va_list arg)
{
	char *p = va_arg(arg, char *);

	if (p == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", p);
}



/**
 * print_octal - Prints a string.
 * @arg: A list pointing to string to print.
 */
void print_octal(va_list arg)
{

}

/**
 * print_bin - Prints a string.
 * @arg: A list pointing to string to print.
 */
void print_bin(va_list arg)
{

}

/**
 * print_hex - Prints a string.
 * @arg: A list pointing to string to print.
 */
void print_hex(va_list arg)
{

}

/**
 * print_hexM - Prints a string.
 * @arg: A list pointing to string to print.
 */
void print_hexM(va_list arg)
{

}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
