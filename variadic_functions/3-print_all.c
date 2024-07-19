#include "variadic_functions.h"

/**
 * print_all - Function that prints anything.
 * @format: List Of Types on The Function
 * c: char.
 * i: int.
 * f: float.
 * s: char * OF NULL.
 * Return: Returns to the void Function.
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int m = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[m])
	{
	switch (format[m])
	{
		case 'c':
		printf("%s%c", separator, va_arg(args, int));
		break;
		case 'i':
		printf("%s%d", separator, va_arg(args, int));
		break;
		case 'f':
		printf("%s%f", separator, va_arg(args, double));
		break;
		case 's':
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", separator, str);
		break;
		default:
		m++;
			continue;
	}
	separator = ", ";
	m++;
	}
	va_end(args);

	printf("\n");
}
