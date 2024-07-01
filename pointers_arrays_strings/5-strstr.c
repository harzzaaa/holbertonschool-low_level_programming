#include "main.h"

/**
 * _strstr - Function that locates a substring
 *@haystack: string to search
 *@needle: string to locate
 *Return: Pointer to start of substring location, or else NULL
*/

char *_strstr(char *haystack, char *needle);
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystach != '\0')
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

	if (*n == '\0')
		return (haystack);

	haystack++;
	}

	return (NULL);
}
