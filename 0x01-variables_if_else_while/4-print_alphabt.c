#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 * main - Starting point.
 *
 * Return: Always 0 for success mesaage;
 */

int main(void)
{
	char low, e, q;

	e = 'e';

	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
		{
		putchar(low);
		}
	}
	putchar('\n');
	return (0);
}
