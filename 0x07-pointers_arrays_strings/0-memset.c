#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

void *_memset(void *s, int b, size_t n)
{
	unsigned int len;
	unsigned char *memory = s, value = b;

	for (len = 0; len < n; len++)
	{
	memory[len] = value;
	}
	return (memory);
}
