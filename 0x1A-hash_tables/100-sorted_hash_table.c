#include "hash_tables.h"

sor_hash_table_t *sor_hash_table_create(unsigned long int size);
int sor_hash_table_set(sor_hash_table_t *ht, const char *key, const char *value);
char *sor_hash_table_get(const sor_hash_table_t *ht, const char *key);
void sor_hash_table_print(const sor_hash_table_t *ht);
void sor_hash_table_print_rev(const sor_hash_table_t *ht);
void sor_hash_table_delete(sor_hash_table_t *ht);

/**
 * sor_hash_table_create - Function creates a sorted hash table
 * @size: New sorted hash table's size
 *
 * Return: On error - NULL, otherwise the new sorted hash table's pointer
 */

sor_hash_table_t *sor_hash_table_create(unsigned long int size)
{
	sor_hash_table_t *ht;
	unsigned long int x;

	ht = malloc(sizeof(sor_hash_table_t));

	if (ht == NULL)
	{
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(sor_hash_node_t *) * size);

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ht->array[x] = NULL;
	}
	ht->sor_head = NULL;
	ht->sor_tail = NULL;

	return (ht);
}

/**
 * sor_hash_table_set - Funtion to add elements to a sorted hash table
 * @ht: Hash table's pointer
 * @key: Key to be added, string has to occupied
 * @value: Value of the key
 *
 * Return: On failure (0), otherwise (1)
 */

int sor_hash_table_set(sor_hash_table_t *ht, const char *key, const char *value)
{
	sor_hash_node_t *current, *temp;
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

	idx = key_idx((const unsigned char *)key, ht->size);
	temp = ht->sor_head;

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

	current = malloc(sizeof(sor_hash_node_t));
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

	if (ht->sor_head == NULL)
	{
		current->sor_prev = NULL;
		current->sor_next = NULL;
		ht->sor_head = current;
		ht->sor_tail = current;
	}

	else if (strcmp(ht->sor_head->key, key) > 0)
	{
		current->sor_prev = NULL;
		current->sor_next = ht->sor_head;
		ht->sor_head->sor_prev = current;
		ht->sor_head = current;
	}

	else
	{
		temp = ht->sor_head;

		while (temp->sor_next != NULL && strcmp(temp->sor_next->key, key) < 0)
		{
			temp = temp->sor_next;
		}

		current->sor_prev = temp;
		current->sor_next = temp->sor_next;

		if (temp->sor_next == NULL)
		{
			ht->sor_tail = current;
		}

		else
			temp->sor_next->sor_prev = current;
		temp->sor_next = current;
	}

	return (1);
}

/**
 * sor_hash_table_get - Function gets the value of a key in a sorted hash table
 * @ht: Sorted hash table's pointer
 * @key: Key
 *
 * Return: If key cannot be paired - NULL, otherwise the value of the key
 */

char *sor_hash_table_get(const sor_hash_table_t *ht, const char *key)
{
	sor_hash_node_t *node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	idx = key_idx((const unsigned char *)key, ht->size);

	if (idx >= ht->size)
	{
		return (NULL);
	}

	node = ht->sor_head;

	while (node != NULL && strcmp(node->key, key) != 0)
	{
		node = node->sor_next;
	}

	return ((node == NULL) ? NULL : node->value);
}

/**
 * sor_hash_table_print - Function to print a sorted hash table in order
 * @ht: Sorted hash table's pointer
 */

void sor_hash_table_print(const sor_hash_table_t *ht)
{
	sor_hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	node = ht->sor_head;
	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sor_next;

		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * sor_hash_table_print_rev - Function to print a sorted hash table in reverse
 * @ht: Sorted hash table's pointer
 */

void sor_hash_table_print_rev(const sor_hash_table_t *ht)
{
	sor_hash_node_t *node;

	if (ht == NULL)
	{
		return;
	}

	node = ht->sor_tail;
	printf("{");

	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sor_prev;

		if (node != NULL)
		{
			printf(", ");
		}
	}
	printf("}\n");
}

/**
 * sor_hash_table_delete - Function to delete a sorted hash table
 * @ht: Sorted hash table's pointer
 */

void sor_hash_table_delete(sor_hash_table_t *ht)
{
	sor_hash_table_t *head = ht;
	sor_hash_node_t *node, *temp;

	if (ht == NULL)
	{
		return;
	}

	node = ht->sor_head;

	while (node)
	{
		temp = node->sor_next;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}

	free(head->array);
	free(head);
}

