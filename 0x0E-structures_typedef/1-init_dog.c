#include "dog.h"
#include "main.h"

/**
 * init_dog - init dog stuct
 * @d: sruct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
