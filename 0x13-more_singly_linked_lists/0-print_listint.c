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

	while (current)
	{

		printf("%d\n", current->n);

		i = i + 1;

		current = current->next;
	}

	return (i);
}
