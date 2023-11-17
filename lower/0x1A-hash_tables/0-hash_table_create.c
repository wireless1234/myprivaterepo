#include "stdlib.h"
#include "hash_tables.h"
/**
 * hash_table_create - create hash table with given size
 * @size: size of array
 * Return: pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
