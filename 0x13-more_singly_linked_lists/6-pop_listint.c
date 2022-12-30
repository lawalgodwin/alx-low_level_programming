#include "lists.h"

/**
  * pop_listint - Delete the head of a singly linked list
  *
  * @head: the address of the pointer to the 1st(head) of the list
  *
  * Return: the datat contained in the deleted head
  */

int pop_listint(listint_t **head)
{
	int data;

	listint_t *temp;

	if (*head == NULL)

		return (0);

	temp = *head;

	data = temp->n;

	*head = (*head)->next;

	free(temp);

	temp = NULL;

	return (data);

}
