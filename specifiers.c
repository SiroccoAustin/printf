#include "main.h"

int (*check(const char *format))(va_list)
{
	func_t arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_pc},
		{"d", print_int},
		{NULL, NULL}
	};
	int i = 0;

	while (arr[i].s)
	{
		if (*(arr[i].s) == *format)
			return (arr[i].ptr);
		i++;
	}
	return (NULL);
}
