#include "hash_tables.h"

/**
 * hash_table_print - Function prints a hash table
 * @ht: Hash table's pointer
 *
 * Description: Key:value pairs are printed in their appearance order in the
 *													array of the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int x;
	unsigned char com_fg = 0;  /* A comma flag */

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (com_fg == 1)
				printf(", ");

			node = ht->array[x];

			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;

				if (node != NULL)
					printf(", ");
			}
			com_fg = 1;
		}
	}
	printf("}\n");
}
