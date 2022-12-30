#include "lists.h"

/**
  * add_nodeint_end - Add node at the end of a singly linked list
  *
  * @head: The pointer to the pointer of the 1st element of the list
  *
  * @n: The data to be stored(integer)
  *
  * Return: The address of the newnode
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = NULL;

	listint_t *cursor = *head;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)

		return (NULL);

	newnode->n = n;

	newnode->next = NULL;

	if (*head == NULL)

		*head = newnode;

	else
	{

		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}

		cursor->next = newnode;
	}

	return (newnode);
}
