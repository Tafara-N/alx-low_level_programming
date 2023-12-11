#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value
 * @s: Starting address of memory to be filled
 * @b: Value to fill
 * @n: Number of bytes to be changed
 *
 * Return: Array changed with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}

	return (s);
}

