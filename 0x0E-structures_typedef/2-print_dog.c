#include <stdio.h>

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

	char *n = (d->name != NULL) ? d->name : "(nil)";

	float a = (d->age != NULL) ? d->age : "(nil)";

	char *o = (d->owner) != NULL ? d->owner : "(nil)";

	printf("Name: %s\n", n);

	printf("Age: %f\n", a);

	printf("Owner: %s\n", o);
}
