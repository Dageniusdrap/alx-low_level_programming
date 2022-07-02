#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting point.
 *
 * Return: Indicates successful finishing of a program.
 */

int main(void)
{
	char revlow;

	for (revlow = 'z'; revlow <= 'a'; revlow--)
	{
	putchar(revlow);
	}
	putchar('\n');
	return (0);
}
