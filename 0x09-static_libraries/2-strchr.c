#include "main.h"

/**
 * _strchr - Main entry point
 * @s: Input value
 * @c: Char
 *
 * Return: Success (0)
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}

