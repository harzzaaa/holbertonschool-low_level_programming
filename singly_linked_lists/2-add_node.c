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
	list_t *my_node;
	unsigned int lenght;

	if (str == NULL)
	{
		return (NULL);
	}

	my_node = malloc(sizeof(list_t));
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
	lenght = 0;
	while (str[lenght] != '\0')
		lenght++;

	my_node->len = lenght;
	my_node->next = *head;
	*head = my_node;

	return (my_node);
}
