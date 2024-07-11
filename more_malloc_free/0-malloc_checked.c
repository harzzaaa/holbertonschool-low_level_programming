#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *malloc_checked - give memory by malloc
 *@b: bytes to allocate
 *Return: ptr for memory
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
