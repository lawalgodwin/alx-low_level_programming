#include "lists.h"

/**
  * add_nodeint - Add node at the beginning of a singly linked list
  *
  * @head: The pointer to the pointer of the 1st  node
  * @n: the integer to be stored in the node
  *
  * Return: The address of the first newnode or NULL on failure
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)

		return (NULL);

	newnode->n = n;

	if (*head == NULL)
	{
		newnode->next = NULL;
	}

	else
	{
		newnode->next = *head;
	}

	*head = newnode;

	return (*head);
}
