#include "dog.h"

/**
 * new_dog - Function who create a dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: Return a Dog or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_l = 0, owner_l = 0, m;
	dog_t *doggy;

	while (name[name_l])
		name_l++;
	while (owner[owner_l])
		owner_l++;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);

	doggy->name = malloc(name_l + 1);
	if (doggy->name == NULL)
		return (NULL);

	doggy->owner = malloc(owner_l + 1);
	if (doggy->owner == NULL)
		return (NULL);

	for (m = 0; m <= name_l; m++)
		doggy->name[m] = name[m];
		doggy->age = age;
	for (m = 0; m <= owner_l; m++)
		doggy->owner[m] = owner[m];

	return (doggy);

}
