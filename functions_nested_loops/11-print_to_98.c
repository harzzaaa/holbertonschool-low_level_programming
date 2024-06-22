#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function who prints numbers from n to 98
 * @n: input
 * Return: Numbers
*/

void print_to_98(int n)
{
	int m;

	if (n <= 98)
	{
		for (m = n; m <= 98; m++)
		{
			if (m == 98)
				printf("98\n");
			else
				printf("%d, ", m);
		}
	}
	else if (n > 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m == 98)
				printf("98\n");
			else
				printf("%d, ", m);
		}
	}
}
