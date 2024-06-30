#include "main.h"

/**
 * _strncpy - Function that copy a string
 *@dest: destination string from copying
 *@src:string to copy
 *@n: bytes of src
 *Return: (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
