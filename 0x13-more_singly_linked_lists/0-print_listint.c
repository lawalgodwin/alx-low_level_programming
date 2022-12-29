#include "lists.h"

/**
  * print_listint - Print the data stored in the list
  *
  * @h: The head of the list
  *
  * Return: The number of elements in the list
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;

	size_t i = 0;

	if (current == NULL)

		return (0);

	while (current)
	{

		printf("%d\n", current->n);

		current = current->next;

		i = i + 1;
	}

	return (i);
}
