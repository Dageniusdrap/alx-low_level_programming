#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Starting Point.
 *
 * Return: Success message
 */

int main(void)
{
	int k;

	char low;

	for (k = '0'; k <= '9'; k++)
	{
	putchar(k);
	}

	for (low = 'a'; low <= 'f'; low++)
	{
	putchar(low);
	}
	putchar('\n');
	return (0);
}
