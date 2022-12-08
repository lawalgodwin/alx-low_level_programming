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
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->next = *head;

	newnode->n = n;

	newnode->prev = NULL;

	*head = newnode;

	return (*head);
}
