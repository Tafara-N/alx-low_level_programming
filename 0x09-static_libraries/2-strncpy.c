#include "main.h"

/**
 * _strncpy - Function copies a string
 * @dest: Destination
 * @src: Source
 * @n: Bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

