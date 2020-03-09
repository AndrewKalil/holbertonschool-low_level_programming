#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees allocated memory for dog struct
 * @d: pointer to struct of dog
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
