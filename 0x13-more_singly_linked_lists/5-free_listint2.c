#include "lists.h"

/**
  * free_listint2 - Free a list
  *
  * @head: The pointer to the pointer of the 1st element in the list
  */

void free_listint2(listint_t **head)
{
	listint_t *cursor;

	listint_t *temp;

	if (*head == NULL)

		return;

	while ((cursor = *head) != NULL)
	{
		temp = cursor;

		*head = (*head)->next;

		free(temp);

		temp = NULL;
	}

	*head = NULL;
}
