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
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
