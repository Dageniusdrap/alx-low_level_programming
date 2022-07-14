#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	unsigned int integer = n;

	if (n < 0)
	{
	_putchar('-');
	integer = -integer;
	}
	if ((integer / 10) > 0)
	{
	print_number(integer / 10);
	}
	_putchar((integer % 10) + '0');
}
