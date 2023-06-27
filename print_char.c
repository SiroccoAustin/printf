#include "main.h"

int print_char(va_list ap)
{
	int count = 0;

	char c = va_arg(ap, int);

	count = _putchar(c);

	return (count);
}
