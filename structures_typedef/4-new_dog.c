#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that create a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_l = 0, owner_l = 0, m;
	dog_t *doggy;

	while (name[name_l])
	name_l++;
	while (owner[owner_l])
	owner_l++;

	doggy = (dog_t *)malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = (char *)malloc(name_l + 1);
	if (doggy->name == NULL)
	return (NULL);

	doggy->owner = (char *)malloc(owner_l + 1);
	if (doggy->owner == NULL)
	return (NULL);

	for (m = 0; m <= name_l; m++)
	doggy->name[m] = name[m];
	doggy->age = age;
	for (m = 0; m <= owner_l; m++)
	doggy->owner[m] = owner[m];

	return (doggy);
}
