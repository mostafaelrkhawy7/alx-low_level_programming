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
	dog_t *poppy;
	//check for name of owner and age less zan zero or not
	if ( name == NULL || owner == NULL || age < 0)
		return (NULL);
	poppy = (dog_t *) malloc(sizeof(dog_t));
	//allocate memory for struct
	if (poppy == NULL)
		return (NULL);
	poppy->name = malloc(sizeof (char) * (_strlen(name) +1));
	if ((*poppy).name == NULL)
	{
		free(poppy);
		return (NULL);
	}
	poppy->owner = malloc(sizeof(char) * (_starlen(owner) +1));
	if ((*poppy).owner == NULL)
	{
		free(poppy->name)
		free(poppy);
		return (NULL);
	}	

	poppy->name = _strcpy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcpy(poppy->owner, owner);

	return (poppy);
}
