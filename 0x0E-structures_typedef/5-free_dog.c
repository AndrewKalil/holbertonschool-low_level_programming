#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees allocated memory for dog struct
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
