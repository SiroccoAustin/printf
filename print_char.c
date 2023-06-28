#include "main.h"

/**
 * print_char - print character
 * @ap: variadic list
 * Return: number of character
 */

int print_char(va_list ap)
{
	int count = 0;

	char c = va_arg(ap, int);

	count = write(1, &c, 1);

	return (count);
}
