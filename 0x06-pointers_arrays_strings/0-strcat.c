#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */


char *_strcat(char *dest, char *src)
{
	int index = 0, len = 0;

	while (dest[index++])
	{
	len++;
	}
	for (index = 0; src[index]; index++)
	{
	dest[len] = src[index];
	}
	dest = '\0';
	return (dest);
}
