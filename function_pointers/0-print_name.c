#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: fnct ptr to fnct to char*
 * Return: returns void function
*/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
