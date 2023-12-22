#include "hash_tables.h"

/**
 * hash_table_create - Function creates a hash table
 * @size: Size of the array.
 *
 * Return: On error - NULL, otherwise a pointer to the new hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned long int x;

	ht = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
	{
		return (NULL);
	}

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (hash_t->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		hash_t->array[x] = NULL;
	}

	return (hash_t);
}
