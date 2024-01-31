#include "dog.h"
#include<stdio.h>

/**
 * print_dog - print dog is data from stack
 * struct dog - a poppy struct
 * @d: a pointer for struct
 *
 * Return: no return
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n",
				d->name, d->age, d->owner);
	}
	else if (!d && !d->name)
		printf("Name: (nil)\n");
	else
		printf("\n");
}
