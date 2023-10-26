#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * @nmbr: Number to search for
 * @ind: Bit index
 *
 * Return: Bit value
 */

int get_bit(unsigned long int nmbr, unsigned int ind)
{
	int bit_vl;

	if (ind > 63)
		return (-1);

	bit_vl = (nmbr >> ind) & 1;

	return (bit_vl);
}

