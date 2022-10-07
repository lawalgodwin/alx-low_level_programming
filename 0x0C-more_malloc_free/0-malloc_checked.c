#include <stdlib.h>

#include "main.h"

/**
  * malloc_checked - Check if memory was sucessfully allocated by the OS
  *
  * @b: The size of memory in bytes to be allocated
  *
  * Return: returns the pointer to the reserved memory
  */

void *malloc_checked(unsigned int b)

{
	void *memory = malloc(b);

	if (memory == NULL)

		exit(98);

	return (memory);
}
