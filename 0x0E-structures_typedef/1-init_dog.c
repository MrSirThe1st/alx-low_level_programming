#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variabfefefle of type struct dog
 * @d: pointer to strucfeft dog to initialize
 * @name: name to initialize
 * @age: age to inifeftialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

