#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of the list.
 *
 * @str: s
 *
 * @head: h
 *
 * Return: End List
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_node;
	list_t *temp;

	if (str == NULL)
	{
	return (NULL);
	}
	my_node = (list_t *)malloc(sizeof(list_t));
	if (my_node == NULL)
	{
	return (NULL);
	}
	my_node->str = strdup(str);
	if (my_node->str == NULL)
	{
		free(my_node);
		return (NULL);
	}
	my_node->next = NULL;

	if (*head == NULL)
	{
	*head = my_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = my_node;
	}
	return (my_node);
}
