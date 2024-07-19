#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function who returns sum of all its parameters.
 * @n: All parameters passed on the function.
 * Return:The return would be the sum of all the parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int m;
	int sum;

	if (n == 0)
	{
	return (0);
	}

	sum = 0;
	va_start(arg, n);

		for (m = 0; m < n; m++)
		{
		sum += va_arg(arg, int);
		}

	va_end(arg);
	return (sum);
}
