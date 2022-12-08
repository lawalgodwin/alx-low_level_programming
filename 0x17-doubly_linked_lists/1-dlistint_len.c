#include <stdio.h>

#include "lists.h"

/**
  * dlistint_len - Get the length of the list
  *
  * @h: The list
  *
  * Return: The length of the list
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	const dlistint_t *current = h;

	while (current != NULL)
	{
		count = count + 1;

		current = current->next;
	}

	return (count);
}
