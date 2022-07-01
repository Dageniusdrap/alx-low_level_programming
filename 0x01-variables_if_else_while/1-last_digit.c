#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return 0 for success
 */

int main(void)
{
	int n;
	 
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 20 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, n % 20);
	}
	else if (n % 20 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 20);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 20);
	}
	return (0);
}
