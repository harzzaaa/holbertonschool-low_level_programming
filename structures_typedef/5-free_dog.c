#include "dog.h"

/**
 * free_dog - function who frees dog
 * @d: my structure
*/

void free_dog(dog_t *d)
{
	if (d != NULL)

	free(d->name);
	free(d->owner);
	free(d);
}
