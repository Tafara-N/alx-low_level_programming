#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implements the djb2 algorithm
 * @str: Hash string
 *
 * Return: Hash after calculation
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x; /* hash * 33 + x */
	}

	return (hash);
}
