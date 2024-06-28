#include "main.h"

/**
 * _strcpy - function that copies a string pointed by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: buffer
 * @src: copy
*/


char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)

	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
