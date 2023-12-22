#include "hash_tables.h"

/**
 * key_index - Function gets an index of the key:value pair
 * @key: Key to get the index
 * @size: Size of the array of the hash table
 *
 * Return: An index of the key
 *
 * Description: This function uses the djb2 algorithm
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

