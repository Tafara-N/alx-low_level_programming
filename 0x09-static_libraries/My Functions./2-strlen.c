#include "main.h"

/**
 * _strlen - Function returns the length of a string
 * @s: The string
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}

