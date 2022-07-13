#include "main.h"

/**
 * strcat - Concatenates the string pointed and terminating
 *          null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */

char *strcat(char *dest, const char *src)
{
	int check = 0, len = 0;

	while (dest[check++] != '\0')
	{
	len++;
	}
	for (index = 0; src[index]; index++)
	{
	dest[len++] = src[index];
	}
	return (dest);
}
