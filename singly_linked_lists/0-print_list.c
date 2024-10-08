#include "lists.h"

/**
 * print_list - Function to print all elements of my structure.
 *
 * @h: Pointer to list_t
 *
 * Return: Returns the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	count++;
	h = h->next;
	}
	return (count);
}
