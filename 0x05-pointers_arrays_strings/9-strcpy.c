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
	 size_t i;

	 for (i = 0 ; i < n && src[i] != '\0' ; i++)
	 {
	  dest[i] = src[i];
	 }
	  for ( ; i < n ; i++)
	  {
	  dest[i] = '\0';
	  }
	  return (dest);
}
