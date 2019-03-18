#include "holberton.h"

/**
 * print_p - function prints an address
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_p(va_list args)
{
	long int adr = va_arg(args, int);
	_putchar('0');
	_putchar('x');
	return _printf("%x", adr) + 2;
}
