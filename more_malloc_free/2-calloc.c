#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - Function who allocates memory for an array using malloc
 * @nmemb: elements in the array
 * @size: size of element in bytes
 * Return: ptr to allocated memory or NULL if fail
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int t_s;
	void *ptr;
	unsigned char *p;
	unsigned int m;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (nmemb > UINT_MAX / size)
	{
		return (NULL);
	}

	t_s = nmemb * size;
	ptr = malloc(t_s);

	if (ptr == NULL)
	{
		return (NULL);
	}

	p = (unsigned char *)ptr;
	for (m = 0; m < t_s; m++)
	{
		p[m] = 0;
	}

	return (ptr);
}
