#include "function_pointers.h"

/**
 * int_index - Function who searches for an integer
 * @array: ptr to array of ints
 * @size: nmb of elements in array
 * @cmp: ptr to function
 * Return: 0 or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (m = 0; m < size; m++)
	{
	if (cmp(array[m]) != 0)
		return (m);
	}

	return (-1);
}
