#include "main.h"

/**
 * leet - Function that encode a string into the 1337
 *
 * @str:
 *
 * Return: returns an encoded string
*/

char *leet(char *str)
{
	int i;
	int m;
	int n;

	while (str[i = 0])
	{
		m = 0;
		n = 5;

	while (m < n)
	{
		if (str[i] == str[m] || str[i] - 32 == str[m])
		{
			str[i] = str[m];
		}
		m++;
	}
	i++;
	}
	return (str);
}
