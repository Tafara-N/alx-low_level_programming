#include "main.h"

/**
 * print_sign - Function prints the sign of a number and returns a value for
 *              when the number is positive, negative or 0.
 *
 * @n: The number whose sign is to be printed.
 *
 * Return: int
 *       :  1 if the number is greater than 0.
 *         -1 if the number is less than 0.
 *          0 if the number is 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}
	else
	{
		_putchar(48);

		return (0);
	}


}
