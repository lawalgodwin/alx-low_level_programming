#include <stdlib.h>

#include "dog.h"


/**
  * init_dog - The fuction initialises object of type dog
  *
  * @d: the object to initialise
  *
  * @name: The name of the dog
  *
  * @age: The age of the dog
  *
  * @owner: The owner of the dog
  *
  * Return: returns nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));


	d->name = name;

	d->age = age;

	d->owner = owner;
}
