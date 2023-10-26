#include "main.h"

/**
 * get_bit - Value of a bit in dec number
 * @n: Number to search for
 * @index: Bit's index
 *
 * Return: Bit's value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_vl;

	if (index > 63)
		return (-1);

	bit_vl = (n >> index) & 1;

	return (bit_vl);
}

