#include "main.h"

/**
 * print_alphabet_x10 - Function prints 10 times the alphabet in lowercase,
 *                      using _putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);

			j++;
		}

		_putchar('\n');

		i++;
	}


}
