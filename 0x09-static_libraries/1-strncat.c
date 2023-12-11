#include "main.h"

/**
 * _strncat - Function concatenate two strings using n bytes from src
 * @dest: Destination
 * @src: Source
 * @n: Bytes
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[j];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
