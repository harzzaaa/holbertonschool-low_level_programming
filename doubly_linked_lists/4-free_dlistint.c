#include "lists.h"

/**
 * free_dlistint - Function who frees the dlistint_t list
 *
 * @head: Pointer that points the head of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
