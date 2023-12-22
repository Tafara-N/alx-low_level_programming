#include "hash_tables.h"

void tafara(void);

/**
 * hash_table_set - Function adds or updates an element in a hash table
 * @ht: Hash table's pointer
 * @key: Key to add, has to be an occupied string
 * @value: Value
 *
 * Return: On failure (0), otherwise (1)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;
	char *value_copy;
	unsigned long int idx, x; /* idx is index */

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}

	value_copy = strdup(value);

	if (value_copy == NULL)
	{
		return (0);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	for (x = idx; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_copy;
			return (1);
		}
	}

	current = malloc(sizeof(hash_node_t));

	if (current == NULL)
	{
		free(value_copy);
		return (0);
	}

	current->key = strdup(key);

	if (current->key == NULL)
	{
		free(current);
		return (0);
	}
	current->value = value_copy;
	current->next = ht->array[idx];
	ht->array[idx] = current;
	return (1);
}
