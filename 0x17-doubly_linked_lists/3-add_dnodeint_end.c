#include <stdio.h>

#include "lists.h"

#include <stdlib.h>

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	dlistint_t *current = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (current != NULL)
	{

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = newnode;

		newnode->next = NULL;

		newnode->prev = current;

		newnode->n = n;

	}

	else
	{
		*head = newnode;
	}

	return (newnode);
}
