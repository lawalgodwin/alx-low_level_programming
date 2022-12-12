#include <stdio.h>

#include "lists.h"

#include <stdlib.h>

/**
  * add_dnodeint_end - Add node at the end of a list
  *
  * @head: head of the list
  *
  * @n: The data to put in the node
  *
  * Return: The address of the new node
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	dlistint_t *current = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	newnode->next = NULL;

	if (current != NULL)

		while (current->next != NULL)

			current = current->next;


	if (current != NULL)

		current->next = newnode;

	else
		*head = newnode;

	newnode->prev = current;

	return (newnode);
}
