#include "holberton.h"

int print_conv(unsigned int num, int base, int cap)
{
	int i, count = 0;
	char *outputString = "0123456789abcdef";
	char *capitalString = "0123456789ABCDEF";
	char arr[50];
	char *ptr;

	ptr = &arr[49];
	*ptr = '\0';

	if (cap)
		outputString = capitalString;
	do	{
		*--ptr = outputString[num % base];
		num /= base;
	} while (num);

	for (i = 0; ptr[i]; i++)
	{
		_putchar(ptr[i]);
		count++;
	}
	return (count);
}

/**
 * print_u - function converts input to decimal and prints
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_u(va_list args)
{
	int count;
	unsigned int num = va_arg(args, unsigned int);

      	count = print_conv(num, 10, 0);
	return (count);
}

/**
 * print_o - function converts input to octal and prints
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_o(va_list args)
{
	int count;
	unsigned int num = va_arg(args, unsigned int);

	count = print_conv(num, 8, 0);
	return (count);
}

/**
 * print_x - function converts input to lowercase hex and prints
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_x(va_list args)
{
	int count;
	unsigned int num = va_arg(args, unsigned int);

      	count = print_conv(num, 16, 0);
	return (count);
}

/**
 * print_X - function converts input to uppercase hex and prints
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_X(va_list args)
{
	int count;
	unsigned int num = va_arg(args, unsigned int);

	count = print_conv(num, 16, 1);
	return (count);
}
