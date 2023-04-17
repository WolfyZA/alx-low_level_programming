#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for the struct dog function
 * @d: struct value to free
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
