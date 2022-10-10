#include <stdio.h>

#include <stdlib.h>

#include "dog.h"

/**
  * print_dog - print all members of the struct
  *
  * @d: The struct to print its members
  *
  * Return: returns nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)

		return;

	char *n = (d->name == NULL) ? "(nil)" : (d->name);


	char *o = (d->owner) == NULL ? "(nil)" : (d->owner);

	printf("Name: %s\n", n);

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", o);
}
