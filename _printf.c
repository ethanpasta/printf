#include holberton.h

/**
 *_printf - prints input as printf would do
 * @format: a character string containing directives
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, count;
	va_list valist;
	print_table p[] = {
		{"c", print_char},
		{"s", print_str}
		{NULL, NULL}
	};

	va_start(valist, format);

	/*
	 * INSERT PRINTF FUNCTIONALITY HERE
	 */

	va_end(valist);
}
