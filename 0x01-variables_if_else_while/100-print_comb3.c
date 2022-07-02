#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */

int main(void)
{
	int k;

	for (k = 0; k <= 99; k++)
	{
	putchar((k / 10) + '0');
	putchar((k % 10) + '0');
		if (k != 99)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
