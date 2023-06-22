#include "dog.h"
#include <stdlib.h>

/**
 * free_dogs - frdwees memdory allocated for a struct dog
 * @d: struct dogd to free
 */
void free_dogs(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

