#include "hash_tables.h"

/**
  * hash_table_print - Print the entries of a hash table
  *
  * @ht: the hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;

	unsigned long int i;

	if (ht == NULL)

		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];

		while (tmp)
		{
			if (tmp->next)

				printf("\'%s\': \'%s\', ", tmp->key, tmp->value);
			else
				printf("\'%s\': \'%s\'", tmp->key, tmp->value);

			tmp = tmp->next;
		}

	}

	printf("}\n");
}
