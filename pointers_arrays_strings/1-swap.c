#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swap *a and *b
 * @a: 1st integer
 * @b: 2sd integer
*/

void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;

	swap_int(*a, *b);
}
