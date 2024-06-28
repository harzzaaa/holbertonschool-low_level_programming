#include "main.h"
#include <stdio.h>
/**
 * print_array - function that print n elements of an 
 * array of integers followed by a new line
 * @a: 1st integer
 * @n: 2sd integer
*/

void print_array(int *a, int n)
{
	int *pr = a;
	int *fi = a + n - 1;

	if (n > 0)
	{
		while (pr <= fi)
		{
			printf("%d", *pr);
			if (pr != fi)
			
			{
				printf(", ");
			}
			pr++;
		}
	}
	printf("\n");
}
