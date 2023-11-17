#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *element, *temp;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        element = ht->array[i];
        while (element != NULL)
        {
            temp = element->next;
            free(element->key);
            free(element->value);
            free(element);
            element = temp;
        }
    }

    free(ht->array);
    free(ht);
}
