#include "hash_tables.h"

/**
 * zero_hash_table - sets values in hash_table's array to 0
 * @table: table to be set
 * @size: size of array
 */
void zero_hash_table(hash_table_t *table, unsigned long int size)
{
	hash_node_t **ptr = table->array;
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		*ptr = NULL;
		ptr++;
	}
}

/**
 * hash_table_create - creates a new hash table
 * @size: size of hash table to be created
 *
 * Return: the new table, or NULL if error occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ret = malloc(sizeof(hash_table_t));

	if (ret == NULL)
	{
		return (NULL);
	}

	ret->array = malloc(sizeof(hash_table_t *) * size);
	if (ret->array == NULL)
	{
		free(ret);
		return (NULL);
	}

	zero_hash_table(ret, size);

	ret->size = size;

	return (ret);
}
