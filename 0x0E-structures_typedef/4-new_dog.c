#include "dog.h"
#include <stdlib.h>

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
	unsigned int i, j, k;
	dog_t *newdog;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->name = malloc(i * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (k = 0; z <= i; k++)
	{
		(*newdog).name[k] = name[k];
	}
	(*newdog).age = age;
	newdog->owner = malloc(j * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
	{
		newdog->owner[k] = owner[k];
	}
	return (newdog);
}

