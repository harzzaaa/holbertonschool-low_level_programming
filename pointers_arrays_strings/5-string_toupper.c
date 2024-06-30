#include "main.h"

/**
 * string_toupper - Function that changes all lowercase
 * letters of a string to uppercase
 * @s: string to be used
 * Return: pointer
*/

char *string_toupper(char *s)
{
	char *pointer = s;

	while (*pointer != '\0')
	{
		if (*pointer >= 'a' && *pointer <= 'z')
		{
			*pointer = *pointer - ('a' - 'A');
		}
		pointer++;
	}
	return (s);
}
