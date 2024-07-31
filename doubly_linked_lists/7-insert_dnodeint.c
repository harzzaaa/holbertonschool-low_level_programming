#include "lists.h"

/**
 * insert_dnodeint_at_index - Function who inserts a node at a given position
 *
 * @h: Double ptr to head of my list
 *
 * @idx: Index that serve to insert a node
 *
 * @n: Value
 *
 * Return: Node's Add' or NULL
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *cur;
	unsigned int r;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{	
		return (NULL);
		node->n = n;
	}
	if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		if (*h != NULL)
		(*h)->prev = node;
		*h = node;
		return (node);
	}
	cur = *h;
	for (r = 0; cur != NULL && r < idx - 1; r++)
	{
		cur = cur->next;
	}
	if (cur == NULL || (cur->next == NULL && r != idx - 1))
	{
		free(node);
		return (NULL);
	}

	node->next = cur->next;
	node->prev = cur;
	if (cur->next != NULL)
		cur->next->prev = node;
	cur->next = node;

	return (node);
}
