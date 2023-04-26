#include "main.h"

/**
 * print_char - print characters
 * @ap: variadic list
 * Return: number of characters printed
 */

int print_char(va_list ap)
{
	int count;

	char c = va_arg(ap, int);

	count += write(1, &c, 1);

	return (count);
}
