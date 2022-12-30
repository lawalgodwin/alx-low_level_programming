#include "lists.h"

/**
  * free_listint - Free the memory assigned to a list
  *
  * @head: The pointer to the 1st element on the singly linked list
  */

void free_listint(listint_t *head)
{
	listint_t *temp;

	listint_t *cursor;

	if (head == NULL)

		return;

	while ((cursor = head) != NULL)
	{
		temp = cursor;

		head = head->next;

		free(temp);
	}
}
