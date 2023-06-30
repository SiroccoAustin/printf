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

	unsigned int z;

	if (num < 0)
	{
		_putchar(c);
		z = -num;
	}
	z = num;
	if (z / 10)
		print_num(z / 10);
	_putchar((num % 10) + '0');
}

/**
 * count_digit - count number of digits to print
 * @i: parameter
 * Return: number of int printed
 */

int count_digit(int i)
{
	unsigned int j = 0, z;

	if (i < 0)
		z = i * -1;
	z = i;
	while (z != 0)
	{
		z /= 10;
		j++;
	}
	return (j);
}
