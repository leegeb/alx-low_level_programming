#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: new name of the dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner);
{
	int i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		i++;
	dog->name = malloc(i * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		dog->name[k] = name[k];
	}
	dog->age = age;
	for (j = 0; owner[j] = j++)
		j++;
	dog->owner = malloc(j * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		dog->owner[k] = owner[k];
	}
	return (dog);
}

