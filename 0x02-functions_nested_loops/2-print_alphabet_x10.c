#include "main.h"

/**
 * main - Starting Point
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char p;
	int d;

	for (d = 0; d <= 10; d++)
	{
	for (p = 'a'; p <= 'z'; p++)
	{
	_putchar(p);
	_putchar('\n');
	}
	}
}
