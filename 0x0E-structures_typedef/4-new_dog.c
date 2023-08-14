#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int n_len, o_len;

	dog = malloc(sizeof(dog_t));
	if (!dog)
		return (NULL);

	n_len = strlen(name);
	o_len = strlen(owner);

	dog->name = malloc(sizeof(char) * (n_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (o_len + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
