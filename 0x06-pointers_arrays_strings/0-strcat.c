#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * Return: A pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int check = 0, len = 0;

	while (*(dest + check) != '\0')
	{
	check++;
	}
	while (len >= 0)
	{
	*(dest + check) = *(src + len);
	if (*(src + len) == '\0')
	{
	break;
	}
	check++;
	len++;
	}
	return (dest);
}
