#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - we want to free memory
 * created
 *
 * @d: dog_t pointer
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
