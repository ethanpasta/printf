#idndef HOLBERTON_H
#define HOLBERTON_H

typedef struct print
{
	char *type;
	void (*func)(va_list);
} print_table;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
