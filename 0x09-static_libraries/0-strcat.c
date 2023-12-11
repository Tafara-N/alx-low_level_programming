#include "main.h"

/**
 * _strcat - Function concatenates two strings
 * @dest: Input value
 * @src: Input value
 *
 * Return: Nothing
 */

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	x = y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}

