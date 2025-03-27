#include "main.h"

/**
 * print_alphabet - Function prints the alphabet in lowercase, using _putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);

		i++;
	}

	_putchar('\n');

}
