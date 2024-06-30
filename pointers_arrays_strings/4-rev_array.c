#include "main.h"

/**
 *reverse_array - Function that reverse the content of an array of integers
 *@a: array of integer reversed
 *@n: elements in the array
*/

void reverse_array(int *a, int n)
{
	int s = 0;
	int e = n - 1;
	int tpm;

		while (s < e)
		{
			tpm = a[s];
			a[s] = a[e];
			a[e] = tpm;
			s++;
			e--;
		}
}
