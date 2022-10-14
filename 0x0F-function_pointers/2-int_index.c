#include "function_pointers.h"

/**
  * int_index - Search an array via a fuction pointer
  *
  * @array: the array to search
  *
  * @size: The size of the array
  *
  * @cmp: the function pointer
  *
  * Return: The index of element if found
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int result;

	int index = 0;

	if (!array || !cmp)

		return;

	if (size <= 0)

		return (-1);

	while (index < size)
	{
		result = cmp(*(array + index));

		if (index != 0)

			return (index);

		index++;
	}

	return (-1);
}
