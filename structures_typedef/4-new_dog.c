#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that create
 * a dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Doggy;
	int cptname = 0;
	int cptowner = 0;
	int cpt;

	Doggy = malloc(sizeof(dog_t));
	if (Doggy == NULL)
	{
		return (NULL);
	}

	for (cpt = 0; name[cpt]; cpt++)
		cptname++;

	for (cpt = 0; owner[cpt]; cpt++)
		cptowner++;

	Doggy->name = malloc(cptname + 1);
	if (Doggy->name == NULL)
	{
	free(Doggy);
	return (NULL);
	}

	Doggy->owner = malloc(cptowner + 1);
	if (Doggy->owner == NULL)
	{
	free(Doggy->name);
	free(Doggy);
		return (NULL);
	}

	for (cpt = 0; cpt <= cptname; cpt++)
	Doggy->name[cpt] = name[cpt];

	Doggy->age = age;

	for (cpt = 0; cpt <= cptowner; cpt++)
	Doggy->owner[cpt] = owner[cpt];

	return (Doggy);
}
