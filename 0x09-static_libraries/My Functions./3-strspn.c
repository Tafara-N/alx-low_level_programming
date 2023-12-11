#include "main.h"

/**
 * _strspn - Entry point
 * @s: String
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}

			else if (accept[r + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (n);
}

