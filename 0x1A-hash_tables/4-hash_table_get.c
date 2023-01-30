#include "hash_tables.h"

/**
  * hash_table_get - A function that retrieves a value associated with a key
  *
  * @ht: the hashtable to retrieve data from
  *
  * @key: the associated key
  *
  * Return: returns the value associated with the key or NULL if key not found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	unsigned long int index;

	if (!ht || !key || *key == '\0')

		return (NULL);
	
	index = key_index((unsigned char *)key, ht->size);
	
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)

			return (tmp->value);

		tmp = tmp->next;
	}

	return (NULL);
}
