#include "main.h"

/**
 * print_str - print string
 * @ap: variadic list
 * Return: number of characters
 */

int print_str(va_list ap)
{
	int count = 0, words = 0, i = 0;

	char *str = va_arg(ap, char *);

	while (str[i])
	{
		words = write(1, &str[i], 1);
		count += words;
		i++;
	}
	return (count);
}
