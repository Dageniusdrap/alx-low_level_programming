#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting of the project
 *
 * Return: Indicates the program ran successfully.
 */

int main(void)
{
	int k, p, d;

	for (k = '0'; k <= '9'; k++)
	{
	for (p = '0'; p <= '9'; p++)
	{
	for (d = '0'; d <= '9'; d++)
	{
	if ((k < p) & (p < d) & (d <= '9'))
	{
	putchar(k);
	putchar(p);
	putchar(d);
	if ((k + p + d) < 168)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
