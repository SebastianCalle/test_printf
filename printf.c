/**
 * _printf - prints all arguments passed 
 * @format: list of argument types
 * Return: void
 */
void _printf(const char * const format, ...)
{
	va_list l;
	char *separator = "";
	int j, i = 0;
	abc funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{"o", print_octal},
		{"b", print_bin},
		{"h", print_hex},
		{"H", print_hexcaps},
	};

	va_start(l, format);
	while (format && format[i])
	{
		j = 0;

		while (j < 4 && format[i] != *(funcs[j].s))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].pt(l);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(l);
}
