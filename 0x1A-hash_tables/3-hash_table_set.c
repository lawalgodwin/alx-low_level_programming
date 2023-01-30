#include "hash_tables.h"

/**
  * hash_table_set - insert item into the hash table
  *
  * @ht: The hash table
  *
  * @key: The item key
  *
  * @value: the item value
  *
  * Return: 1 on success 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;

	hash_node_t *tmp;

	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)

		return (0);

	item = malloc(sizeof(hash_node_t));

	if (item == NULL)

		return (0);

	item->key = strdup(key);

	item->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size);

	/*check if key already exits in the list*/

	while (tmp && strcmp(tmp->key, key) != 0)

		tmp = tmp->next;

	/*if key already exists, update the value*/

	if (tmp)
	{
		free(tmp->value);

		tmp->value = strdup(value);

		return (1);
	}

	if (ht->array[index] == NULL)
	{
		item->next = NULL;

		ht->array[index] = item;

		return (1);
	}

	item->next = ht->array[index];

	ht->array[index] = item;

	return (1);
}
