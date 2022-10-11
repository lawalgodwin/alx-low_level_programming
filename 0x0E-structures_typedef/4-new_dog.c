#include <stdlib.h>

#include "dog.h"

/**
  * new_dog - creates an instance of a struct
  *
  * @name: A member of the struct
  * @age: Another member of the struct
  * @owner: Also member of the struct
  *
  * Return: returns the created object
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog = malloc(sizeof(dog_t));

	if (dog == NULL)

		return (NULL);

	dog->name = malloc(sizeof *name);

	if (dog->name == NULL)
	{
		free(dog);

		return (NULL);
	}

	dog->owner = malloc(sizeof *owner);

	if (dog->owner == NULL)
	{
		free(dog->name);

		free(dog);

		return (NULL);
	}

	return (dog);
}
