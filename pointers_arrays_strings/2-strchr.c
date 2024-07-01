#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function that locates a character in the string
 *@s: main string
 *@c: occurrence
 *Return: NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	{
	s++;
	}

	return (NULL);
}
