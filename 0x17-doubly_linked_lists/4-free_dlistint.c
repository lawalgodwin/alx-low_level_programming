#include <stdlib.h>

#include <stdio.h>

#include "lists.h"

/**
  * free_dlistint - Free all memory allocated to the nodes of a list
  *
  * @head: The head of the list:
  *
  *  Return: Nothing
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;

			head = head->next;

			free(temp);
		}
	}
}
