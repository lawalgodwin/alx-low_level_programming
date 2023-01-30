#include "hash_tables.h"

/**
  * hash_djb2 - A hash function for Hash table data structure
  *             implemented using the djb2 algorithm
  *
  * @str: the string to hash
  *
  * Return: returns the hash of the string
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_code;

	size_t c;

	hash_code = 5381;

	while ((c = *str++)  != '\0')

		hash_code = ((hash_code << 5) + hash_code) + c;

	return (hash_code);
}
