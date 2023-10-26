#include "main.h"

/**
 * print_binary - Function prints the binary correspodent of dec number
 * @n: Number to print in binary
 */

void print_binary(unsigned long int n)
{
	int a;
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (a = 63; a >= 0; a--)
	{
		unsigned long int mask = 1UL << a;

		if ((n & mask) != 0)
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

