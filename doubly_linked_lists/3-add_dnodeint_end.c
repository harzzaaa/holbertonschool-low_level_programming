#include "lists.h"

/**
 * add_dnodeint_end - Function who adds node at end of dlistint_t list
 *
 * @head: Double pointer that point the head of the list
 *
 * @n: Int added to my node
 *
 * Return: Returns Address or NULL if fail
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tempo;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
	}
	else
	{
		tempo = *head;
	while (tempo->next != NULL)
		tempo = tempo->next;

	tempo->next = node;
	node->prev = tempo;
	}
	return (node);
}

