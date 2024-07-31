#include "lists.h"

/**
 * get_dnodeint_at_index - Function who returns
 * the nth node of dlistint_t list (linked
 *
 * @head: Pointer to the head of my dlistint_t list
 *
 * @index: Node's index
 *
 * Return: Ptr to nth node or NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cur_index = 0;
	dlistint_t *cur_node = head;

	while (cur_node != NULL)
	{
		if (cur_index == index)
		{
			return (cur_node);
		}
		cur_node = cur_node->next;
		cur_index++;
	}
	return (NULL);
}
