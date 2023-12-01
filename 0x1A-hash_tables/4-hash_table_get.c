#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value, using a key
 * @ht: hash table containing key/value pair
 * @key: key used to find the value
 *
 * Return: the value if success, NULL if failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL || *key == '\0' || ht->size == 0)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);

	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			return (ptr->value);
		}
		ptr = ptr->next;
	}

	return (NULL);
}
