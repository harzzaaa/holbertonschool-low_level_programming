#include "main.h"

/**
 *_memcpy - Function that copy memory area
 *@dest: main memory area
 *@src: memory area that n bytes are copied from
 *@n: bytes to copy
 *Return: (fi_dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *fi_dest = dest;
	
	while (n--)
	{
		dest++ = src++;
	}
	return (fi_dest);
}
