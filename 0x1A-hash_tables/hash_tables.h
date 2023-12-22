#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */

typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: Size of the array
 * @array: Array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/* Sorted Hash table */

/**
 * struct sor_hash_node_s - Node of a sorted hash table
 * @key: The key, string
 *					Key is unique in the Hash Table
 * @value: Value of a key
 * @next: Next node of the List's pointer
 * @sor_prev: Previous element of the sorted linked list's pointer
 * @sor_next: Next element of the sorted linked list's pointer
 */

typedef struct sor_hash_node_s
{
	char *key;
	char *value;
	struct sor_hash_node_s *next;
	struct sor_hash_node_s *sprev;
	struct sor_hash_node_s *snext;
} sor_hash_node_t;

/**
 * struct sor_hash_table_s - Sorted hash table data structure
 * @size: Array size
 * @array: Array of size @size
 *
 * Description: Each cell of this array is a pointer to the first node of a
 *				linked list, because we want our HashTable to use a Chaining
 *				collision handling
 *
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */

typedef struct sor_hash_table_s
{
	unsigned long int size;
	sor_hash_node_t **array;
	sor_hash_node_t *sor_head;
	sor_hash_node_t *sor_tail;
} sor_hash_table_t;

/* Sorted Hash Table functions */

sor_hash_table_t *shash_table_create(unsigned long int size);
int sor_hash_table_set(sor_hash_table_t *ht, const char *key, const char *value);
char *sor_hash_table_get(const sor_hash_table_t *ht, const char *key);
void sor_hash_table_print(const sor_hash_table_t *ht);
void sor_hash_table_print_rev(const sor_hash_table_t *ht);
void sor_hash_table_delete(sor_hash_table_t *ht);

#endif /* HASH_TABLES_H */
