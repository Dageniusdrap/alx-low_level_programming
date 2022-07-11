#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of @str.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
	len++;
	}
	return (len);
}
