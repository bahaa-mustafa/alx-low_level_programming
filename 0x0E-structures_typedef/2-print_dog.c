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
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}	
}
