/**
 * File: 1-alphabet.c
 *
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/* Print_alphabet - Prints the alphabet in lowercase, followed by a new line.*/
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar('\n');
}
