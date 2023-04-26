#include "main.h"

/**
 * specifier - function to check format specifier
 * @format: type of data to be printed
 * Return: function
 */

int (*specifier(const char *format))(va_list)
{
	int i;

	func_t array[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; array[i].c != NULL; i++)
	{
		if ((*array[i].c) == *format)
		{
			return (array[i].func);
		}
	}
	return (NULL);
}
