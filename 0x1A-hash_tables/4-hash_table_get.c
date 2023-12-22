#include "hash_tables.h"

/**
 * hash_table_get - Function gets the value of a key in a hash table
 * @ht: Hash table's pointer
 * @key: Key
 *
 * Return: If key can't be paired - NULL, otherwise the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int idx;  /* index */

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}

	node = ht->array[idx];

	while (node && strcmp(node->key, key) != 0)
	{
		node = node->next;
	}

	return ((node == NULL) ? NULL : node->value);
}
