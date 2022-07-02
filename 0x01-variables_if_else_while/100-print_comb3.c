#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting point
 *
 * Return: Always 0 show success.
 */

int main(void)
{
	int k, d;

	for (k = '0'; k < '9'; k++)
	{
	for (d = '0'; d <= '9'; d++)
	{
	if ((k < d) & (d <= '9'))
	{
	putchar(k);
	putchar(d);
	if ((d < '9') | (k < '8'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
