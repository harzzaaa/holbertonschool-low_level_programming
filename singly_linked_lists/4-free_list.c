#include "lists.h"

/**
 * free_list - Function that frees the list_t list
 *
 * @head: Pointer that points to the head of the list
*/

void free_list(list_t *head)
{
	list_t *cur = head;

	while (cur != NULL)
	{
		list_t *node = cur->next;

		if (cur->str != NULL)
	{
		free(cur->str);
	}
	free(cur);
	cur = node;
	}
}
