#include "search_algos.h"

int recursively_search(int *arr, int start, int end, int value);
void print_array(int *arr, int start, int end);

/**
  * binary_search - Searches for an item using the binary search alg.
  * @array: the array to search through
  * @size: The size or the number of items in the array
  * @value: The value to search for
  * Return: the index of the item if found else -1
  */
int binary_search(int *array, size_t size, int value)
{
	int index;

	if (array == NULL)
		return (-1);

	index = recursively_search(array, 0, size - 1, value);

	if (index > -1)
		return (index);

	return (-1);
}

/**
  * recursively_search - search for the value recursively
  * @arr: The array pointer
  * @start: The array starting point for the search
  * @end: The array index at which to stop search
  * @value: The value to search for
  * Return: the item index if found else -1
  */

int recursively_search(int *arr, int start, int end, int value)
{
	int midpoint = 0;

	midpoint = start + (end - start) / 2;

	if (start > end)
		return (-1);

	print_array(arr, start, end);

	if (arr[midpoint] == value)
		return (midpoint);

	else if (arr[midpoint] > value)
		return (recursively_search(arr, start, midpoint - 1, value));

	else
		return (recursively_search(arr, midpoint + 1, end, value));
}
/**
  * print_array - print array to search
  * @arr: The array containing the elemnts to search
  * @start: Where to start printing
  * @end: Where to end printing
  */
void print_array(int *arr, int start, int end)
{
	printf("Searching in array: ");

	for (; start <= end; start++)
		printf("%d%s", arr[start], start == end ? "\n" : ",");
}
