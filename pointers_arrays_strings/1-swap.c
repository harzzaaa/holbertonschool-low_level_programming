#include "main.h"
#include <stdio.h>

/**
 *
*/

void swap_int(int *a, int *b)
{
	int err = *a;
	*a = *b;
	*b = err;
}
int main1(void)
{
	int a = 98;
	int b = 42;

	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	return ('0');
}
