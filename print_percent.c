#include "main.h"

/**
 * print_percent - print percent sign
 * @ap: variadic function
 * Return: number of characters printed
 */

int print_percent(va_list ap)
{
	int percent = va_arg(ap, int);

	write(1, &percent, 1);

	return (1);
}
