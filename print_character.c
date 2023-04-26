#include "main.h"

/**
 * print_char - print characters
 * @ap: variadic list
 * Return: number of characters printed
 */

int print_char(va_list ap)
{
	int count = 0, val = 0;

	char c = va_arg(ap, int);

	val = write(1, &c, 1);

	count += val;

	return (count);
}
