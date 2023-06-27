#include "main.h"

/**
 * print_int - prints integers
 * @ap: variadic list
 * Return: number of int printed
 */

int print_int(va_list ap)
{
	int count = 0, num;

	num = va_arg(ap, int);
	count = count_digit(num);
	print_num(num);
	return (count);
}

/**
 * print_num - print number
 * @num: parameter
 * Return: print number
 */

void print_num(int num)
{
	char c = '-';

	if (num < 0)
		_putchar(c);
	if (num / 10)
		print_num(num / 10);
	_putchar((num % 10) + '0');
}

/**
 * count - count number of digits to print
 * @i: parameter
 * Return: number of int printed
 */

int count_digit(int i)
{
	int j = 0;

	if (i < 0)
		i *= -1;
	while (i != 0)
	{
		i /= 10;
		j++;
	}
	return (j);
}
