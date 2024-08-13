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

	char al[5] = {'A', 'E', 'O', 'T', 'L'};
	char ar[5] = {'4', '3', '0', '7', '1'};

	while (str[i = 0])
	{
		m = 0;
		n = 5;

	while (m < n)
	{
		if (str[i] == al[m] || str[i] - 32 == al[m])
		{
			str[i] = ar[m];
		}
		m++;
	}
	i++;
	}
	return (str);
}
