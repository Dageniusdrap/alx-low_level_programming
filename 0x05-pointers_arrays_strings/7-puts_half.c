#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int index = 0, len = 0, d;

	while (str[index++])
	{
	len++;
	}
	if ((len % 2) == 0)
	{
	d = len / 2;
	}
	else
	{
	d = (len + 1) / 2;
	}
	for (index = d; index < len; index++)
	{
	_putchar(str[index]);
	}
	_putchar('\n');
}
