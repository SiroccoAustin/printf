#include "main.h"

/**
 * print_pc - print percent sign
 * @ap: variadic list
 * Return: 1 after execution
 */

int print_pc(va_list ap)
{
	int word = 0;

	char c = '%';
	(void)ap;

	word = _putchar(c);
	return (word);
}
