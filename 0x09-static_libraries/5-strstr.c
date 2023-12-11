#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: Haystack
 * @needle: Needle
 *
 * Return: Success (0)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

