#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int k, index;

	while (s[index] != '\0')
	{
	k++;
	}
	for (index = k - 1; index >= 0; index--)
	{
	_putchar(s[index]);
	}
	_putchar('\n');
}
