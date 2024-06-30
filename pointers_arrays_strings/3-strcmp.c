#include "main.h"

/**
 * _strcmp - Function that compares the 2 strings
 *@s1: 1st string to compare
 *@s2: 2sd string to compare
 *Return: (@s1 - *s2)
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
