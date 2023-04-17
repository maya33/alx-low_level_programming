#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - using struct dog function to initialize variables
 * @d: Struct for initializaiton
 * @name: Holding name char array
 * @age: Store age float value
 * @owner: Holds owner name char array
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

