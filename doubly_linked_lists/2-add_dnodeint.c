#include "lists.h"

/**
 * add_dnodeint - Function who adds a new node at the
 * beginning of the dlistint_t list
 *
 * @head: Double Pointer to the head of the dlistint list
 *
 * @n: Int to add my node
 *
 * Return: Element's address, fail if it's NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->prev = NULL;
	node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = node;
	}

	*head = node;
	return (node);
}
