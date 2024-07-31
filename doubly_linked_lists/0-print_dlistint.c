#include "lists.h"

/**
 * print_dlistint - Function who prints all the elements
 * of the dlistint_t list
 *
 * @h: Pointer to that point to the head of the list
 *
 * Return: returns the elements
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count_node = 0;

	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count_node++;
	}
	return (count_node);
}
