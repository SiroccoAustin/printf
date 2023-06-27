#include "main.h"

int print_pc(va_list ap)
{
	int word = 0;

	char c = '%';
	(void)ap;

	word = _putchar(c);
	return (word);
}
