#include <stdlib.h>

#include "lists.h"

/**
  * sum_dlistint - Get the sum of all numbers stored in each node of a list
  *
  * @head: The head of the list
  *
  * Return: the summation reult
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)

		return (0);

	if (head != NULL)

		while (head->prev != NULL)

			head = head->prev;

	while (head != NULL)
	{
		sum = sum + head->n;

		head = head->next;
	}

	return (sum);
}
