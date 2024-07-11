#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - main function
 * @size: array size
 * @c: initialization char
 * Return: array or NULL if the size is 0
*/

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	arr = (char *)malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
