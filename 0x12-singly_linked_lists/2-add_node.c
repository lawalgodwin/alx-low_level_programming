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

	size_t i = 0;

	for (; *(str + i); i++)

		;

	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)

		return (NULL);

	newnode->len = i;

	newnode->str = strdup(str);

	list_t *tmp = *head;

	newnode->next = tmp;

	*head = newnode;

	return (newnode);
}
