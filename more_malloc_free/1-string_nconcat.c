#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Function who concatenates 2 strings
 * @s1: 1st string
 * @s2: 2sd string
 * @n: max numb of bytes, s2 to concatenate s1
 * Return: ptr to allocated memory to s1
 * and by the first n bytes of s2 being followed by it
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int p, m, l0, l7;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	for (l0 = 0; s1[l0] != '\0'; l0++)
		;
	for (l7 = 0; s2[l7] != '\0'; l7++)
		;

	if (n >= l0)
	n = l7;

	nstr = malloc(l0 + n + 1);
	if (nstr == NULL)
		return (NULL);

	for (p = 0; p < l0; p++)
		nstr[p] = s1[p];

	for (m = 0; m < n; m++)
		nstr[p + m] = s2[m];
	nstr[p + m] = '\0';

	return (nstr);
}
