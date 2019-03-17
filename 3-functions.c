#include "holberton.h"

/**
 * print_b - function converts unsigned integer argument
 * to binary
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_b(va_list args)
{
	int i = 0, count = 0;
	int arr[32] = {0};
	int num = va_arg(args, int);

	while (num)
	{
		arr[i] = num % 2;
		i++;
		num /= 2;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
		count++;
	}
	return (count);
}
