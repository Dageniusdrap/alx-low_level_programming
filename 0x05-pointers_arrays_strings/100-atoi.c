#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */

int _atoi(char *s)
{
	int set_sign = 1;
	unsigned int numb = 0;

	do {
	if (*s == '-')
	{
	set_sign *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	numb = (numb * 10) + (*s - '0');
	}
	else if (numb > 0)
	{
	break;
	}
	}
	while (*s++)
	{
	}
	return (numb * set_sign);
}
