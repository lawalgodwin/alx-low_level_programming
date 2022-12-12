#include <stdio.h>

#include "lists.h"

/**
  * print_dlistint - Print the elements of a doubly linked list
  *
  * @h: The head  of the list
  *
  * Return: The number of elements
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		current = current->next;

		count = count + 1;
	}

	return (count);
}