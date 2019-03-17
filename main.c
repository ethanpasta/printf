#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("US:   Let's try to printf a simple sentence.\n");
	len2 = printf("THEM: Let's try to printf a simple sentence.\n");
	//ui = (unsigned int)INT_MAX + 1024;
	//addr = (void *)0x7ffe637541f0;
	_printf("US:   Length:[%d, %i]\n", len, len);
	printf("THEM: Length:[%d, %i]\n", len2, len2);
	_printf("US:   Negative:[%d]\n", -762534);
	printf("THEM: Negative:[%d]\n", -762534);
	//_printf("Unsigned:[%u]\n", ui);
	//printf("Unsigned:[%u]\n", ui);
	//_printf("Unsigned octal:[%o]\n", ui);
	//printf("Unsigned octal:[%o]\n", ui);
	//_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	//printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);*/
	_printf("US:   Character:[%c]\n", 'H');
	printf("THEM: Character:[%c]\n", 'H');
	_printf("US:   String:[%s]\n", "I am a string !");
	printf("THEM: String:[%s]\n", "I am a string !");
	//_printf("Address:[%p]\n", addr);
	//printf("Address:[%p]\n", addr);
	len = _printf("US:   Percent:[%%]\n");
	len2 = printf("THEM: Percent:[%%]\n");
	_printf("US:   Len:[%d]\n", len);
	printf("THEM: Len:[%d]\n", len2);
	_printf("US:   Unknown:[%r]\n");
	printf("THEM: Unknown:[%r]\n");
	return (0);
}
