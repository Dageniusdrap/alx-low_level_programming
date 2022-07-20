#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 *
 * Return: The value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	int answer = x;

	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	answer *= _pow_recursion(x, y - 1);
	return (answer);

}
