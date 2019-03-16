#include "holberton.h"

/**
 *_printf - prints input as printf would do
 * @format: a character string containing directives
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	int i, j, count = 0;
	char ptype;
	va_list args;
	print_table ptbl[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_perc},
		{0, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		if (!format[i])
			break;
		while (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		if (!format[i])
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
			_putchar('%');
			_putchar(format[i]);
			count += 2;
		}
	}
	va_end(args);
	return (count);
}
