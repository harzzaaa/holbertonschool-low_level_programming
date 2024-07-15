#include "function_pointers.h"

/**
 * array_iterator - Function who executes a function
 * given as a param' on each element of an array
 * @array: array
 * @size: array's size
 * @action: ptr to function
 * Return: returns to starting function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array == NULL || action == NULL)
	return;

	for (m = 0; m < size; m++)
	action(array[m]);
}
