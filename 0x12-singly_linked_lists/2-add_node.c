#include "lists.h"

/**
  * add_node - Add a node to a list
  *
  * @head: The head of the list to add node to
  *
  * @str: The value to add to the string data point
  *
  * Return: returns the addressof the newly added node
  *
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *currentnode = *head;

	int str_len = 0;

	while (*(str++))

		str_len++;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)

		return (NULL);

	newnode->len = str_len;

	newnode->str = strdup(str);

	if (currentnode == NULL)
	{
		newnode->next = NULL;

		currentnode = newnode;
	}

	else
	{
		list_t *tmp = currentnode;

		newnode->next = tmp;

		currentnode = newnode;
	}

	return (currentnode)
}
