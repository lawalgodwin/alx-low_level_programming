#include "lists.h"

/**
  * listint_len - Print the data stored in the list
  *
  * @h: The head of the list
  *
  * Return: The number of elements in the list
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	size_t i = 0;

	while (current)
	{

		i = i + 1;

		current = current->next;
	}

	return (i);
}
