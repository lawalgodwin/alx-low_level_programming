#include <stdlib.h>


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
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));

	if (d == NULL)

		exit(EXIT_FAILURE);

	d->name = name;

	d->age = age;

	d->owner = owner;
}
