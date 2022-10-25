#include "lists.h"

/**
  * add_node_end - Add node at the end of the list
  *
  * @head: The pointer to the list being worked with
  *
  * @str: The string value to populate the data point with
  *
  * Return: returns the address of the newly appended node
  *
  */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t n;

	list_t *currentnode = *head;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)

		return (NULL);

	for (n = 0; *(str + n); n++)

		;
	newnode->len = n;

	newnode->str = strdup(str);

	newnode->next = NULL;

	if (currentnode == NULL)

		currentnode = newnode;

	else
	{
		while (currentnode->next != NULL)
		{
			currentnode = currentnode->next;
		}
	}

	currentnode->next = newnode;

	return (currentnode);
}
