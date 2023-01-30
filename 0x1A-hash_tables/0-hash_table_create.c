#include "hash_tables.h"

/**
  * hash_table_create - create a hash table of a specified size
  * @size: the size of the hash table
  * Return: returns the pointer to the hash table if successful else NULL
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	unsigned long int i = 0;

	ht = malloc(sizeof(hash_table_t));

	if (ht == NULL)

		return (NULL);

	ht->size = size;

	ht->array = malloc(sizeof(hash_node_t) * size);

	if (ht->array == NULL)

		return (NULL);

	for (; i < size; i++)
	{
		ht->array[i] = NULL;
	}


	return (ht);
}
