#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: String
 * @accept: Input
 *
 * Return: Success (0)
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}

