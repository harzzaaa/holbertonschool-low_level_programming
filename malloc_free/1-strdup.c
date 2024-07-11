#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Main function who returns ptr to newly allocated memo
 * @str: my string who need to be duplicated
 * Return: should be NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *dupstr;
	int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
		len++;

	dupstr = (char *)malloc((len + 1) * sizeof(char));
	if (dupstr == NULL)
	return (NULL);

	for (i = 0; i <= len; i++)
		dupstr[i] = str[i];

	return (dupstr);
}
