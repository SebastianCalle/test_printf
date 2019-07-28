/**
 * _printf - prints all arguments passed 
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

		while (j < 9 && format[i] != *(funcs[j].s))
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
