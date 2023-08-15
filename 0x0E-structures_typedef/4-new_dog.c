#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _strlen - returns the length 
 * @s: string
 *
 * Return: the length 
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * *_strcpy - func returns dest cobied from src
 * @dest: pointer to coby in
 * @src: string cobied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j;
	for ( j = 0; src[j]; j++)
		dest[j] = src[j];
	dest[j] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name(new) 
 * @age: age(new)
 * @owner: owner(new)
 *
 * Return: pointer or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog1;
	//check for name of owner and age less zan zero or not
	if ( name == NULL || owner == NULL || age < 0)
		return (NULL);
	new_dog1 = (dog_t *) malloc(sizeof(dog_t));
	//allocate memory for struct
	if (new_dog1 == NULL)
		return (NULL);
	new_dog1->name = malloc(sizeof (char) * (_strlen(name) +1));
	if ((*new_dog1).name == NULL)
	{
		free(new_dog1);
		return (NULL);
	}

	new_dog1->name = _strcopy(d->name, name);
	new_dog1->age = age;
	new_dog1->owner = _strcopy(d->owner, owner);

	return (new_dog1);
}
