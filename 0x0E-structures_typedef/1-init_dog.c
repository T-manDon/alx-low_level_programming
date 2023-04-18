#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - introduces the main variable
 * @d: points to the dog struct
 * @name: the name variable
 * @age: age variable
 * @owner: owner variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

	d = malloc(sizeof(struct dog));

	d->name = name;

	d->age = age;

	d->owner = owner;

	}
