#include "dog.h"
#include <stdio.h>

/**
 * init_dog - we have to initialized the dog
 * @d: dogs pointer
 * @name: dog that can pointer
 * @age: dog name
 * @owner: owners name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
