#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (for Success)
 */

int main(void)
{
	char low_case;

	for (low_case = 'a'; low_case <= 'z'; low_case++)
		putchar(low_case);
		putchar('\n');

	return (0);
}
