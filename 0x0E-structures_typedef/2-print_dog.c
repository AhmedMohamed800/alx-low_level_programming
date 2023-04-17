#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - prints a struct dog
* @d: the dog struct
* Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else if ((*d).name == NULL)
	{
		printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, d->age, d->owner);
	}
}
