#ifndef doggy
#define doggy

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure for dog
 *@name: dog name
 *@age: dog age
i *@owner: dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *typedef dog_d - name of struct
*/

typedef struct dog dog_d;

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
void free_dog(dog_d *p);
dog_d *new_dog(char *name, float age, char *owner);

#endif
