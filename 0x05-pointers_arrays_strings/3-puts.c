#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @str: The string to be printed.
 */

void _puts(char *str)
{
	int len;

	while (*str)
	{
	_putchar(*str++);
	len++;
	}
	_putchar('\n');
}
