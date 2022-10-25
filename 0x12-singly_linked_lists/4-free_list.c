#include "lists.h"

/**
  * free_list - Free memory space used by the list
  *
  * @head: The pointer to the list
  *
  */

void free_list(list_t *head)
{
	list_t *tmp;


	while ((tmp = head) != NULL)
	{
		head = head->next;

		free(tmp->str);

		free(tmp);

	}
}
