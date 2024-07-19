#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function who prints numbers, by a new line.
 * @separator: String to print between numbers.
 * @n: Number of Ints who need to be passed on the function
 * Return: Returns to the void function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
	printf("%d", va_arg(args, int));
	if (separator != NULL && m < n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
