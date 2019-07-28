/**
 * fx - Prints a float.
 * @arg: A list pointing to float to print.
 */
void fx(va_list arg)
{
	printf("%f", (float)va_arg(arg, double));
}
