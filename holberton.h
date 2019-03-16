#idndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

typedef struct print
{
	char *type;
	void (*func)(va_list);
} print_table;

int _putchar(char c);
int _printf(const char *format, ...);
void print_c(va_list args);
void print_s(va_list args);
void print_perc(va_list args);

#endif
