#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

/**
 * struct func - func structure
 * @s: pointer to string
 * @ptr: pointer to function
 */

typedef struct func
{
	char *s;
	int (*ptr)(va_list);
} func_t;

int (*check(const char *format))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list ap);
int print_char(va_list ap);
int print_pc(va_list ap);
int print_int(va_list ap);

#endif /*MAIN_H*/
