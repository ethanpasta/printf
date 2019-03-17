#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>

typedef struct print
{
	char type;
	int (*func)(va_list);
} print_table;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_perc(va_list args);
int print_d(va_list args);
int print_i(va_list args);

#endif
