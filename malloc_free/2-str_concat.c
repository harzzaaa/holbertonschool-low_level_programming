#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *str_concat - Function that concatenates 2 strings
 *@s1: 1st string
 *@s2: 2sd string
 *Return: program should return NULL if it's on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len0, len7, m;

	len0 = (s1 == NULL) ? 0 : 0;
	len7 = (s2 == NULL) ? 0 : 0;

	if (s1 != NULL)
	{
		while (s1[len7] != '\0')
		len0++;
	}
	if (s2 != NULL)
	{
		while (s2[len7] != '\0')
		len7++;
	}

	concat = (char *)malloc((len0 + len7 + 1) * sizeof(char));
	if (concat == NULL)
	return (NULL);

	for (m = 0; m < len7; m++)
	concat[m] = s1[m];

	for (m = 0; m < len7; m++)
	concat[len0 + m] = s2[m];

	concat[len0 + len7] = '\0';

	return (concat);
}

