#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */

char *leet(char *str)
{
	int len1 = 0, len2;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[len1])
	{
	for (len2 = 0; len2 <= 7; len2++)
	{
	if (str[len1] == leet[len2] || str[len1] - 32 == leet[len2])
	{
	str[len1] = len2 + '0';
	}
	}
	len1++;
	}
	return (str);
}
