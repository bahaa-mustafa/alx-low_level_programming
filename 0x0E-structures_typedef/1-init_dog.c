#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initial dog informations
 * @d: struct of dog
 * @name: name of poppy
 * @age: age of poppy
 * @owner: poppy is owner
 *
 * Return: no return
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
