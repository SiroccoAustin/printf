#include "main.h"

int print_str(va_list ap)
{
	int count = 0, words = 0, i = 0;
	
	char *str = va_arg(ap, char *);

	while (str[i])
	{
		words = _putchar(str[i]);
		count += words;
		i++;
	}
	return (count);
}
