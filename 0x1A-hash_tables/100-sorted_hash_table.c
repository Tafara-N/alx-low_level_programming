#include "hash_tables.h"

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Function creates a sorted hash table
 * @size: New sorted hash table's size
 *
 * Return: On error - NULL, otherwise the new sorted hash table's pointer
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Function to add elements to a sorted hash table
 * @ht: Hash table's pointer
 * @key: Key to be added, string has to occupied
 * @value: Value of the key
 *
 * Return: On failure (0), otherwise (1)
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *current, *temp;
	char *value_copy;
	unsigned long int idx;

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
	temp = ht->shead;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_copy;
			return (1);
		}
		temp = temp->snext;
	}

	current = malloc(sizeof(shash_node_t));
	if (current == NULL)
	{
		free(value_copy);
		return (0);
	}

	current->key = strdup(key);
	if (current->key == NULL)
	{
		free(value_copy);
		free(current);
		return (0);
	}

	current->value = value_copy;
	current->next = ht->array[idx];
	ht->array[idx] = current;

	if (ht->shead == NULL)
	{
		current->sprev = NULL;
		current->snext = NULL;
		ht->shead = current;
		ht->stail = current;
	}

	else if (strcmp(ht->shead->key, key) > 0)
	{
		current->sprev = NULL;
		current->snext = ht->shead;
		ht->shead->sprev = current;
		ht->shead = current;
	}

	else
	{
		temp = ht->shead;

		while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
		{
			temp = temp->snext;
		}

		current->sprev = temp;
		current->snext = temp->snext;

		if (temp->snext == NULL)
		{
			ht->stail = current;
		}

		else
			temp->snext->sprev = current;
		temp->snext = current;
	}

	return (1);
}

/**
 * shash_table_get - Function gets the value of a key in a sorted hash table
 * @ht: Sorted hash table's pointer
 * @key: Key
 *
 * Return: If key cannot be paired - NULL, otherwise the value of the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_index((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}

	node = ht->shead;

	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->snext;
	}

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Function to print a sorted hash table in order
 * @ht: Sorted hash table's pointer
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	node = ht->shead;
	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;

		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Function to print a sorted hash table in reverse
 * @ht: Sorted hash table's pointer
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	node = ht->stail;
	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;

		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Function to delete a sorted hash table
 * @ht: Sorted hash table's pointer
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}

	node = ht->shead;

	while (node)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}

