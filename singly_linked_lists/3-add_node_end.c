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
	list_t *last_node;
	unsigned int lenght;

	if (str == NULL)
	{
	return ('\0');
	}
	my_node = malloc(sizeof(list_t));

	if (my_node == NULL)
	{
	return ('\0');
	}
	my_node->str = strdup(str);
	if (my_node->str == NULL)
	{
		free(my_node);
		return ('\0');
	}
	lenght = 0;

	while (str[lenght] != '\0')
	{
		lenght++;
	}
	my_node->len = lenght;
	my_node->next = NULL;

	if (*head == NULL)
	{
		*head = my_node;
	}
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = my_node;
	}
	return (my_node);
}
