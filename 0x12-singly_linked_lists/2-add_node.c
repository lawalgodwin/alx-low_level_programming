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
	list_t *new_node;

	size_t n;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

		return (NULL);

	new_node->str = strdup(str);

	for (n = 0; str[n]; n++)

		;

	new_node->len = n;


	new_node->next = *head;

	*head = new_node;

	return (*head);

}
