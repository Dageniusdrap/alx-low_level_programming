#include <unistd.h>
#include "main.h"

/**
 * main -  Starting 
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char d;
	int p;

	for (p = 0; p < 10; p++)
	{
	for (d = 'a'; d <= 'z'; d++)
	{
	_putchar(d);
	}	
	}
	_putchar('\n');
	return (0);
}
