#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - refers to the  freed memory
 * @d: refers to the dog var
 */

void free_dog(dog_t *d)

{
	if (d)

	{

	free(d->name);
	free(d->owner);
	free(d);

	}
}
