#ifndef DOG_H
#define DOG_H

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


/**
 *  struct dog - poppy struct as dog_t
 *  @name: poppy name
 *  @age: poppy age
 *  @owner: poppy is owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

#endif
