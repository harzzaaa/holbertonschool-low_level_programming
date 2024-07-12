#include "dog.h"

/**
 * init_dog - function that inialize variable of type struct dog
 * @d: appel structure
 * @name: dog name
 * @age: dog's age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)

	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
