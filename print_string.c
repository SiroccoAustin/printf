#include "main.h"

/**
 * print_str - print strings
 * @ap: variadic function
 * Return: number of characters printed
 */

int print_str(va_list ap)
{
	int count = 0, i, val = 0;

	char *str = va_arg(ap, char *);

	for (i = 0; str[i]; i++)
	{
		val = write(1, &str[i], 1);
		count += val;
	}
	return (count);
}
