#include "lists.h"

/**
 * dlistint_len - Function who returns number of elements
 * in the linked list "dlistint_t"
 *
 * @h: Pointer that point to the head of the list
 *
 * Return: Number of the linked elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
