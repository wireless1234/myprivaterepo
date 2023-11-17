#include "hash_tables.h"
/**
 * key_index - return index to add key
 * @key: key
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
