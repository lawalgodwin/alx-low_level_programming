#include "lists.h"

/**
  * sum_listint - Get the sum of all data(n) stored in a list
  *
  * @head: The pointer to the 1st node
  *
  * Return: The result of the summation
  */

int sum_listint(listint_t *head)
{
	size_t sum = 0;

	if (head == NULL)

		return (0);

	while (head)
	{

		sum = sum + head->n;

		head = head->next;
	}

	return (sum);
}
