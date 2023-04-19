#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	dog->name = malloc(i + 1);
	dog->owner = malloc(j + 1);

	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->name), free(dog->owner), free(dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		dog->name[k] = name[k];
	}
	dog->name[k] = '\0';
	for (k = 0; k < j; k++)
	{
		dog->owner[k] = owner[k];
	}
	dog->owner[k] = '\0';
	dog->age = age;
	return (dog);
}
