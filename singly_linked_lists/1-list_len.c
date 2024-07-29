#include "lists.h"

/**
 * list_len - Function who returns the number of elements linked to list
 *
 * @h: ptr
 *
 * Return: Number of elements linked
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
