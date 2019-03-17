#include <limits.h>
#include <stdio.h>
#include "holberton.h"

int main(void)
{
	printf("START OF TEST\n");
	printf("=====================\n");
	//null
	printf(NULL);
	_printf(NULL); //broken

	//char

	printf("==========CHAR========\n");
	char c = 'z';
	int alen, elen;
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c\n", '\0');
	_printf("Actual     : %c\n", '\0');

	//strings
	printf("======STRINGS========\n");
	char *str = "hello, world";
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	printf("Expected   : %s\n", NULL);
	_printf("Actual     : %s\n", NULL); //broken
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");

	//%%
	alen = elen = 0;
	printf("===========%%========\n");
	printf("Expected   : %%\n");
	_printf("Actual     : %%\n");
	elen = printf("Expected   : %%%%\n");
	alen = _printf("Actual     : %%%%\n");
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);

	//i
	printf("=====INTEGERS========\n");
	alen = elen = 0;
	int p = 237482;
	int n = -328472;
	int z = 0;
	elen = printf("Expected   : %i\n", p);
	alen = _printf("Actual     : %i\n", p);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	elen = printf("Expected   : %i\n", n);
	alen = _printf("Actual     : %i\n", n);
	printf("Expected   : %i\n", elen);
	_printf("Actual     : %i\n", alen);
	printf("Expected   : %i\n", z);
	_printf("Actual     : %i\n", z);
	printf("Expected   : %i\n", INT_MAX);
	_printf("Actual     : %i\n", INT_MAX);
	printf("Expected   : %i\n", INT_MIN);
	_printf("Actual     : %i\n", INT_MIN);

	//d
	printf("=====DECIMALS========\n");
	alen = elen = 0;
	p = 1134001;
	n = -4352;
	z = 0;
	elen = printf("Expected   : %d\n", p);
	alen = _printf("Actual     : %d\n", p);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	elen = printf("Expected   : %d\n", n);
	alen = _printf("Actual     : %d\n", n);
	printf("Expected   : %d\n", elen);
	_printf("Actual     : %d\n", alen);
	printf("Expected   : %d\n", z);
	_printf("Actual     : %d\n", z);
	printf("Expected   : %d\n", INT_MAX);
	_printf("Actual     : %d\n", INT_MAX);
	printf("Expected   : %d\n", INT_MIN);
	_printf("Actual     : %d\n", INT_MIN);
	printf("=====================\n");

	return (0);
}
