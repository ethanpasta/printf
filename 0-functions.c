#include "holberton.h"

/**
 * print_c - function prints char
 * @args: list of arguments
 *
 * Return: none
 */
void print_c(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_s - function prints string
 * @args: list of arguments
 *
 * Return: none
 */
void print_s(va_list args)
{
	_putchar(va_arg(args, char *));
}

/**
 * print_perc - function prints % sign
 * @args: list of arguments
 *
 * Return: none
 */
void print_perc(va_list args)
{
	_putchar('%');
}
