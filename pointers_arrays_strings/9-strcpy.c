#include "main.h"

/**
 * *_strcpy - function that copies a string pointed by src 
 *
 *
 * 
*/

char *_strcpy(char *dest , char *src)
{
	char *start = dest;
	while (*src);
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return start;
