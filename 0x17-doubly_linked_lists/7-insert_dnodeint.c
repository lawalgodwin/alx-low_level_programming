#include <stdlib.h>

#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a node at a specified index
  *
  * @h: The head of the list
  *
  * @idx: The given index (zero indexing is used here)
  * @n: The data to put in the node
  *
  * Return: the address of the inserted node
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;

	unsigned int i = 1;


	dlistint_t *temp = *h;

	if (idx == 0)

		newnode = add_dnodeint(h, n);
	else
	{

		/*allocate space for a new node and assign data to it*/
		newnode = malloc(sizeof(dlistint_t));

		if (newnode == NULL)

			return (NULL);

		newnode->n = n;

		/*get the previous node as 'temp' before insertion*/

		while (i < idx)
		{
			temp = temp->next;

			i++;
		}

		if (temp == NULL)

			return (NULL);

		newnode->next = temp->next;/*Assign the previous next to new node next*/

		temp->next = newnode;/*Assign the newnode to be the new next of the previous (i.e temp)*/

		newnode->prev = temp;/*Here, temp is now the previous of the new node*/

		/*Let's re-assign a new previous to the new node next*/

		if (newnode->next != NULL)/*check if the next node after newnode is null*/

			newnode->next->prev = newnode;/*assign newnode as the new previous*/
	}

	return (newnode);
}
