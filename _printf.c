#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0, words = 0, count = 0;

	int (*ptr)(va_list);

	va_list ap;
	va_start(ap, format);
	if (!format)
		return (-1);

	while(format[i])
	{
		if (format[i] != '%')
		{
			words = _putchar(format[i]);
			count += words;
			i++;
		}
		if (format[i] == '%')
		{
			ptr = check(&format[i + 1]);
			words = ptr(ap);
			count += words;
			i++;
		}
		if (format[i] == '\0')
			break;
	}
	va_end(ap);
	return (count);
}