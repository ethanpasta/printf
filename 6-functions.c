#include "holberton.h"
#include <stdio.h>

/**
 * print_S - function prints string non printable characters are
 * printed as \x followed by their ASCII Code value in Uppercase hex
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_S(va_list args)
{
	int i;
	char *s = va_arg(args, char *);
	char *conv;

	if (s == NULL)
	{
		s = "(null)";
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 32 && s[i] <= 126)
			_putchar(s[i]);
		else
		{
			_putchar('\\');
			_putchar('x');
			conv = print_conv(s[i], 16, 1);
			if (*(conv + 1) == 0)
				_putchar('0');
			_printf("%s", conv);
		}
	}
	return (i);
}
