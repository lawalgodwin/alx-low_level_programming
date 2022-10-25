#include "lists.h"

/**
  * print_list - Prints all the elements of a list_t list.
  *
  * @h: the list to print its elements
  *
  * Return: returns the number of elements in the list
  */

size_t print_list(const list_t *h)
{
	const list_t *currentnode = h;

	size_t nodecount = 0;

	while (currentnode != NULL)
	{
		nodecount++;

		if (currentnode->str == NULL)

			printf("[0] (nil)\n");

		else
		{
			printf("[%d] %s\n", currentnode->len, currentnode->str);
		}

		currentnode = currentnode->next;
	}

	return (nodecount);
}
