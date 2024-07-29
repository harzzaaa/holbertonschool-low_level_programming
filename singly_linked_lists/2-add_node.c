#include "lists.h"

/**
 * add_node - Function who adds a new node at the start of list_t list
 *
 * @head: Double pointer to node
 *
 * @str: Pointer string in new node
 *
 * Return: Returns address or NULL if no memory
*/

list_t *add_node(list_t **head, const char *str)
{
	char *my_str;
	list_t *my_node;

	my_str = strdup(str);
	if (my_str == NULL)
	{
		return (NULL);
	}

	my_node = (list_t *)malloc(sizeof(list_t));
	if (my_node == NULL)
	{
	free(my_str);
	return (NULL);
	}

	my_node->str = my_str;
	my_node->next = *head;
	*head = my_node;
	return (my_node);
}
