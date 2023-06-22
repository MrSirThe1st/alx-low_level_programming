#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @nameer: name to initidwalize
 * @age: age to feinitialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *nameer, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->nameer = nameer;
	d->age = age;
	d->owner = owner;
}

