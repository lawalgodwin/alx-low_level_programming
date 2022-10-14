#include <stdlib.h>

#include "function_pointers.h"

/**
  * array_iterator - Iterates throuh an array using a funtion Ptr
  *
  * @array: The array to iterate
  * @size: The size of the array
  * @action: the function pointer
  *
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)

		return;

	while (i < size)
	{
		action(*(array + i));

		i++;
	}
}
