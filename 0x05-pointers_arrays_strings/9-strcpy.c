#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int b = 0, d;

	while (dest[b])
	{
	b++;
	}
	for (d = 0; src[d] != '\0' d++)
	{
	dest[b] = src[d];
	b += 1;
	}
	dest[b] = '\0';
	return (dest);
}
