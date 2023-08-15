#include "dog.h"

/**
 * init_dog - initialize variables of struct dog
 * @d: pointer 
 * @name: dog name
 * @age: dog age
 * @owner: owner's name
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
