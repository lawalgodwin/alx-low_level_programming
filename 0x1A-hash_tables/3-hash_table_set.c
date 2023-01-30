#include "hash_tables.h"
size_t update_htable(hash_node_t *item, const char *key, const char *value);

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

	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)

		return (0);

	item = malloc(sizeof(hash_node_t));

	if (item == NULL)

		return (0);

	item->key = strdup(key);

	item->value = strdup(value);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		item->next = NULL;

		ht->array[index] = item;

		return (1);
	}

	/*traverse the list to check if key already exist*/

	if (update_htable(ht->array[index], key, value))
		return (1);

	item->next = ht->array[index];

	ht->array[index] = item;

	return (1);
}

/**
  * update_htable - Updates the hash table with new value if key already exist
  * @item: The hash table pointer
  * @key: the key pointer
  * @value: the new value pointer
  * Return: 1 if updated 0 otherwise
  */

size_t update_htable(hash_node_t *item, const char *key, const char *value)
{
	hash_node_t *tmp = item;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);

			tmp->value = strdup(value);

			return (1);
		}

		tmp = tmp->next;
	}

	return (0);
}
