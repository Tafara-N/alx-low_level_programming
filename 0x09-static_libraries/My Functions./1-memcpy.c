#include "main.h"

/**
* _memcpy - a function that copies memory area
* @dest: Where memory is stored
* @src: Where memory is copied
* @n: Bytes number
*
*Return: The copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

