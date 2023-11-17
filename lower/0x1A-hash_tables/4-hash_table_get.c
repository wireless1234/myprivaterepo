#include <stdio.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key
 *
 * Return: value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index_value;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	index_value = key_index((unsigned char *)key, ht->size);
	node = ht->array[index_value];
	if (node == NULL)
	{
		return (NULL);
	}
	else if (strcmp(node->key, key) == 0)
	{
		return (node->value);
	}
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (node->value);
			node = node->next;
		}
	}
	return (NULL);
}
