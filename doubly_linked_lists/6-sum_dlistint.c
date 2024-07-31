#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of data n of linked list
 *
 * @head: Ptr to head of my list
 *
 * Return: Sum of n if empty 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *cur = head;

	while (cur != NULL)
	{
		sum += cur->n;
		cur = cur->next;
	}
	return (sum);
}
