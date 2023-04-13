#include "search_algos.h"

/**
  * linear_search - Search for an item in a list using linear search
  * @array: The array to search through
  * @size: The size of the array or number of elements in the array
  * @value: The value or item to search for
  * Return: The index of the item if found else -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (value == array[i])
			return (i);
	}

	return (-1);
}
