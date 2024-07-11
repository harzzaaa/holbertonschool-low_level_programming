#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates array of integers
 * @min: min value in range
 * @max: max value in range
 * Return: ptr to new array, or NULL if max superior max
*/

int *array_range(int min, int max)
{
	int *array;
	int size;
	int m;

	if (min > max)
	return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		array[m] = min + m;
	return (array);
}
