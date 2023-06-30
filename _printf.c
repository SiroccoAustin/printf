#include "main.h"

/**
 * _printf - prints every data type like a normal printf function
 * @format: string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, words = 0, count = 0;

	int (*ptr)(va_list);

	va_list ap;

	va_start(ap, format);

	if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			f = check(&format[i + 1]);
			words = f(ap);
			count += words;
			i = i + 2;
			if (format[i] == '\0')
			{
				break;
			}
		}
		else
		{
			words = _putchar(format[i]);
			count += words;
			i++;
		}
	}
	va_end(ap);
	return (count);
}
