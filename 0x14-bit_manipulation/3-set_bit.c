#include "main.h"

/**
 * set_bit - Function sets bit at a given index to 1
 * @nmbr: Pointer to the number to change
 * @ind: Bit index to set to 1
 *
 * Return: Success 1, failure -1
 */

int set_bit(unsigned long int *nmbr, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*nmbr |= (1UL << ind);
	return (1);
}

