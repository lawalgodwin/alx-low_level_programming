#include <stdio.h>

#include "lists.h"

#include <stdlib.h>

/**
  * add_dnodeint - Add node at the beginning of a list
  *
  * @head: The head of the list
  * @n: The data to put
  *
  * Return: The address of the new node
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;

	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (h != NULL)

		while (h->prev != NULL)

			h = h->prev;

	if (h != NULL)

		h->prev = newnode;

	newnode->next = h;

	newnode->n = n;

	newnode->prev = NULL;

	*head = newnode;

	return (newnode);
}
