#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog 
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}	
		else
		{
			printf("Name: %s\n", d->name);
		}	
	if (d->owner == NULL)
	{
		printf("owner: (nil)\n");
	}
		else
		{
			printf("owner: %s\n", d->owner);
		}		
	printf("age: %f\n", d->age);

}
