#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all possible combinations of two two-digit numbersi.
 *
 * Return: Always show program finished successfully.
 */

int main(void)
{
	int d, p;

	for (d = 0; d <= 99; d++)
	{
	for (p = 0; p <= 99; p++)
	{
	if (d < p)
	{
	putchar((d / 10) + '0');
	putchar((d % 10) + '0');
	putchar(' ');
	putchar((p / 10) + '0');
	putchar((p % 10) + '0');
	if (d != 98 || p != 99)
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
