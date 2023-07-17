#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int  lname, lowner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (lname = 0; name[lname]; lname++)
		;

	for (lowner = 0; owner[lowner]; lowner++)
		;

	p_dog->name = malloc(lname + 1);
	p_dog->owner = malloc(lowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}
	strcpy(p_dog->name, name);
	strcpy(p_dog->owner, owner);
	p_dog->age = age;

	return (p_dog);
}
