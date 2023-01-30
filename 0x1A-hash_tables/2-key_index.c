#include "hash_tables.h"

/**
  * key_index -Calculate the index of a given key in the hash table
  *
  * @key: the key to get its index on the table
  *
  * @size: The size of the hash table
  *
  * Return: The calculated index of the given key
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = (hash_djb2(key) % size);

	return (key_index);
}
