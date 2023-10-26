#include "main.h"

/**
 * _strchr - Locates a character inside a string.
 * @s: string to be searched
 * @c: character to be located
 * Return: If c found - A pointer to the first occurance.
 * If c not found - NULL.
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
