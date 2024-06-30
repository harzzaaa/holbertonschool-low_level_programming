#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: string
 * @src: string to *dest
 * @n: byte of src's string
 *Return: (dest)
*/

char *_strncat(char *dest, char *src, int n)
{
	char *pointer = dest;
	int i = 0;

	while (*pointer != '\0')
	{
	pointer++;
	}

		while (i < n && src[i] != '\0')
		{
		*pointer = src[i];
		pointer++;
		i++;
		}

		*pointer = 0;
	return (dest);
}
