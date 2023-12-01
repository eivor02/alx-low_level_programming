#include "hash_tables.h"

/**
 * hash_table_delete - frees a hash table
 * @ht: table to be freed
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array_ptr;
	hash_node_t *node_ptr;
	hash_node_t *tmp;
	unsigned long int i;

	if (ht == NULL)
	{
		return;
	}

	if (ht->size == 0)
	{
		free(ht);
		return;
	}

	array_ptr = ht->array;

	for (i = 0; i < ht->size; i++)
	{
		node_ptr = *array_ptr;

		while (node_ptr != NULL)
		{
			tmp = node_ptr;

			node_ptr = node_ptr->next;

			free(tmp->key);

			free(tmp->value);

			free(tmp);
		}

		array_ptr++;
	}

	free(ht->array);

	free(ht);
}
