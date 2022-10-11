#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_dog - frees the dog
 * @d: dog to free
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
