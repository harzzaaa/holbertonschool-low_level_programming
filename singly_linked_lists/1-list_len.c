#include "lists.h"

/**
 * list_len - Function who returns the number of elements in the linked list
 *
 * @h: Ptr
 *
 * Return: Returns the elements in the list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
