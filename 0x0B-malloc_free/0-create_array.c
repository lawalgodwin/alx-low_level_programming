#include "main.h"

/**
  * craete_array - Dynamically create an array and initialize with a value
  *
  * @size: The size of the array to be created
  *
  * @c: The constant value to initialize the array with
  *
  * Return: Returns the address of the first byte of the array
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr = malloc(size * sizeof(char));

	if (ptr == NULL || size == 0)

		return (NULL);

	while (i < size)
	{
		*(ptr + i) = c;

		i++;
	}

	return (ptr);
}
