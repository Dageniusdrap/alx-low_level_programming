#include <stdio.h>
#include <stdlib.h>
#include <time.H>

/**
 * main - Starting point of a project;
 *
 * Return: Show succss of a project running;
 */

int main(void)
{
	int k;

	for (k = 0; k < 100; k++)
	{
	putchar((k / 10) + '0');
	putchar((k % 10) + '0');
	if (k != 99)
	{
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
