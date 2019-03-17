#include "holberton.h"

/**
 *print_helper - prints input as printf would do
 * @format: a character string containing directives
 * @ptbl: table of functions
 * @args: list of arguments
 * Return: The number of characters printed
 */

int print_helper(const char *format, print_table ptbl[], va_list args)
{
	int i = 0, j, count = 0, done = 0;
	char ptype;

	while (format && format[i])
	{
		if (!format[i])
			done = 1;
		while (format[i] != '%')
		{
			if (!format[i])
			{
				done = 1;
				break;
			}
			_putchar(format[i]);
			count++;
			i++;
		}
		if (done)
			break;
		i++;
		ptype = format[i];
		for (j = 0; ptbl[j].type; j++)
		{
			if (ptype == ptbl[j].type)
			{
				count += ptbl[j].func(args);
				break;
			}
		}
		if (ptbl[j].type == 0)
		{
			if (!format[i])
				break;
			_putchar('%');
			_putchar(format[i]);
			count += 2;
		}
		i++;
	}
	return (count);
}

/**
 *_printf - prints input as printf would do
 * @format: a character string containing directives
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;
	print_table ptbl[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_perc},
		{'d', print_d},
		{'i', print_i},
		{'b', print_b},
		{0, NULL}
	};
	va_start(args, format);

	count = print_helper(format, ptbl, args);

	va_end(args);
	return (count);
}
