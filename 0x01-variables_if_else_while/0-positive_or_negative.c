#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand((0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("n is positive");
	}
	else if (n == 0)
	{
	printf("n is zero");
	}
	else
	{
	printf("n is negative");
	}
	return (0);
}
