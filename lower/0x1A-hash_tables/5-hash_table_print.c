#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - print hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *element;
	int add_comma = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < (ht->size - 1))
	{
		element = ht->array[i];
		while (element != NULL)
		{
		if (add_comma)
			printf(", ");
		add_comma = 1;
		printf("'%s' : '%s'", element->key, element->value);
		element = element->next;
		}
		i++;
	}
	printf("}\n");
}
