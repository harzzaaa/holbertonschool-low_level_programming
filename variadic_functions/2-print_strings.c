#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Function who prints Strings
 * @separator: String To Print between strings
 * @n: Number of strings.
 * Return: Return to the void function.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int m;
	char *str;

	va_start(args, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
		printf("(nil)");
		}
		else
		{
		printf("%s", str);
		}
		if (separator != NULL && m < n - 1)
		{
		printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}
