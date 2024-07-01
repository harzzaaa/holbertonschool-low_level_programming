#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 *@s: string to be searched
 *@accept: string that contain the bytes to match
 *Return: Pointer to byte of @s who match one of the bytes in @accept
 *or else, NULL
*/

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
			return (s);
			}
		}
		s++;
	}
	return (NULL);
}
