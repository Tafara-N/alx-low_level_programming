#include "main.h"

/**
 * print_binary - Prints binary correspodent of a decimal number
 * @nb: Number to print in binary
 */

void print_binary(unsigned long int nb)
{
	int a;
	int flag = 0;

	if (nb == 0)
	{
		_putchar('0');
		return;
	}

	for (a = 63; a >= 0; a--)
	{
		unsigned long int mask = 1UL << a;

		if ((nb & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}

