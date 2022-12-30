#include "lists.h"

/**
  * get_nodeint_at_index - Get the node at an index
  *
  * @head: the pointer to the first node
  *
  * @index: the zero-based index
  *
  * Return: the found node or NULL otherwise
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count = 0;

	if (head == NULL)

		return (NULL);

	while ((head != NULL))
	{
		if (count > index)

			return (NULL);

		if (count == index)

			return (head);

		head = head->next;

		count = count + 1;
	}

	return (NULL);
}
