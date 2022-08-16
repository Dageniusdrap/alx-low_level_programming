#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 *
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
	printf("[%u] ", h->len);
	if (h->str == NULL)
	{
	printf("(nil)\n");
	}
	else
	{
	printf("%s\n", h->str);
	}
	h = h->next;
	nodes++;
	}
	return (nodes);
}
