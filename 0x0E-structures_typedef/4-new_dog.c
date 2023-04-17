#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* new_dog -  creates a new dog.
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: a struct of dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy = (dog_t *)malloc(sizeof(dog_t));
	int name_len = 0, owner_len = 0, i;

	if (new_doggy == NULL)
	{
		return (NULL);
	}
	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	new_doggy->name = (char *)malloc(name_len + 1);
	if (new_doggy->name == NULL)
	{
		free(new_doggy);
		return (NULL);
	}
	new_doggy->owner = (char *)malloc(owner_len + 1);
	if (new_doggy->owner == NULL)
	{
		free(new_doggy->name);
		free(new_doggy);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
	{
		new_doggy->name[i] = name[i];
	}
	new_doggy->name[name_len] = '\0';
	for (i = 0; i < owner_len; i++)
	{
		new_doggy->owner[i] = owner[i];
	}
	new_doggy->owner[owner_len] = '\0';
	new_doggy->age = age;
	return (new_doggy);
}
