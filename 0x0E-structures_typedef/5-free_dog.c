#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free stract from memory allocat
 * @d: pointer to struct
 * Return: no return
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
