#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
	k++;
	}
	while (k)
	{
	_putchar(s[--k]);
	}
	
	_putchar('\n');
}
