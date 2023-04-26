#include "main.h"

/**
 * _printf - display data on the screen like printf function
 * @format: format specifier of what type of data to be displayed
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, val = 0;

	va_list ap;

	va_start(ap, format);

	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
		{
			val = write(1, &format[i], 1);
			count += val;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			func = specifier(&format[i + 1]);
			val = func(ap);
			count += val;
			i = i + 2;
			continue;
			if (format[i] == '\0')
			{
				break;
			}

		}

	}
	return (count);
	va_end(ap);
}
