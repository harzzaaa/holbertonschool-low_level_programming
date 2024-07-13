#ifndef doggy
#define doggy

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - structure for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *typedef dog_t - name of struct
*/

typedef struct dog dog_t;

void init_dog(struct dog *p, char *name, float age, char *owner);
void print_dog(struct dog *p);
void free_dog(dog_t *p);
dog_t *new_dog(char *name, float age, char *owner);

#endif
