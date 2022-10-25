#include "lists.h"

/**
  * list_len - Counts the no. of nodes in a singly linked list
  *
  * @h: The list to count
  *
  * Return: returns the no. of nodes in `h`
  */

size_t list_len(const list_t *h)
{
	const list_t *currentnode = h;

	size_t nodecount = 0;

	while (currentnode != NULL)
	{
		nodecount++;

		currentnode = currentnode->next;
	}

	return (nodecount);
}
