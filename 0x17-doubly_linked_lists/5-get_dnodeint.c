#include <stdlib.h>

#include "lists.h"

/**
  * get_dnodeint_at_index - Get the node at a specified index in a list
  *
  * @index: the index and it starts from 0
  *
  * @head: The head of the list
  *
  * Return: The node at the given index
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *target_node;

	unsigned int count = 0;

	if (head == NULL)

		return (NULL);
	
	if (head != NULL)

		while (head->prev != NULL)

			head = head->prev;

	while (head != NULL)
	{
		if (count == index)
		{
			target_node = head;

			break;
		}

		count = count + 1;

		head = head->next;
	}

	return (target_node);
}
