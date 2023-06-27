#include "main.h"

/**
 * _putchar - writes a character to stdout
 * @c: character to write out
 * Return: number of characters written out
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
