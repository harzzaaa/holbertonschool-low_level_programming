#include "main.h"

/**
 * _strcat - function that concatenates the two strings
 * @dest: string
 * @src: appends to dest string
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	char *pointer = dest;

	while (*pointer != '\0')
	{
		pointer++;
	}
	while (*src != '\0')
	{
		*pointer = *src;
		pointer++;
		src++;
	}

		*pointer = '\0';

	return (dest);
}
