#include "main.h"

/**
 * print_last_digit - Function prints the last digit of a number without the
 *                    sign.
 *
 * @n: The number.
 *
 * Return: int
 *       : The value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		n = -n;
	}

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + 48);

	return (last_digit);
}
