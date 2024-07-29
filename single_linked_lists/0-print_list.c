#include "lists.h"

/**
 * print_list - Function who prints all the elements of
 * the list_t list
 *
 * @h: Pointer to list
 *
 * Return: Returns all the elements of list_t, if str is NULL, print (nil) or 0
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
		printf("[0] (nil)");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
		h = h->next;
		count++;
	}
	return (count);
}
