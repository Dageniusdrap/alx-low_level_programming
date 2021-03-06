#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	char *begin = accept;

	while (*s)
	{
	while (*accept)
	{
	if (*accept == *s)
	{
	return (s);
	}
	accept++;
	}
	accept = begin;
	s++;
	}
	return (NULL);
}
