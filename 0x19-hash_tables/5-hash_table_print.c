#include "hash_tables.h"

#define TRUE 0
#define FALSE 1

/**
 * hash_table_print - prints the hash table in Python dictionary format
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array_ptr;
	hash_node_t *node_ptr;
	unsigned long int i;
	int is_first = TRUE;

	if (ht == NULL)
	{
		return;
	}

	if (ht->size == 0)
	{
		printf("{}\n");
		return;
	}

	array_ptr = ht->array;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		node_ptr = *array_ptr;

		while (node_ptr != NULL)
		{
			if (is_first == FALSE)
			{
				printf(", '%s': '%s'", node_ptr->key,
				       node_ptr->value);
			}
			else
			{
				printf("'%s': '%s'", node_ptr->key,
				       node_ptr->value);
			}

			is_first = FALSE;

			node_ptr = node_ptr->next;
		}

		array_ptr++;
	}

	printf("}\n");
}
