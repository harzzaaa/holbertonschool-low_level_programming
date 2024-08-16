#include "lists.h"

/**
 * add_node - Function who adds a new node
 *
 * @str:
 *
 * @head:
 *
 * Return: Address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *thenode
	unsigned int length;

	if (str == NULL)
	{
		return (NULL);
	}

	thenode = (list_t *)malloc(sizeof(list_t));
	if (thenode == NULL)

	{
			return (NULL);
	}

	thenode->str = strdup(str);
	if (thenode->str == NULL)
	{
		free(thenode);
		return (NULL);
	}
	
	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	thenode->len = length;
	thenode->next = *head;
	*head = thenode;

	return (thenode);
}
