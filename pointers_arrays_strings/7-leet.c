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
	int i = 0;
	int m;
	int n = 5;

	char al[5] = {'A', 'E', 'O', 'T', 'L'};
	char ar[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (m = 0; m < n; m++)
		{
		if (str[i] == al[m] || str[i] == al[m] + 32)
		{
			str[i] = ar[m];
			break;
		}
	}
	i++;
	}
	return (str);
}
