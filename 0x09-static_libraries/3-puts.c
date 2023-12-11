#include "main.h"
#include <stdio.h>

/**
 * _puts - Entry point
 * @str: String
 *
 * Return: Success (0)
 */

void _puts(char *str)
{
	int x = 0;

	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}

