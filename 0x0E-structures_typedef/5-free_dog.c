#include <stdlib.h>

#include "dog.h"

/**
  * free_dog - Frees memory space dynamically allocated for a struct
  *
  * @d: The struct
  *
  * Return: returns nothing
  *
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);

		free(d->name);

		free(d);
	}
}
