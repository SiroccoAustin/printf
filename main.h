#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>

/**
 * struct function - struct
 * @c: pointer to character
 * @func: pointer to function
 */

typedef struct function
{
	char *c;
	int (*func)(va_list);
} func_t;

int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);


#endif /*MAIN_H*/
