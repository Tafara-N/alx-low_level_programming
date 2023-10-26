#include "main.h"

/**
 * clear_bit - Functions ets the value of a given bit to 0
 * @nmbr: Pointer to the number to change
 * @ind: Bit index to clear
 *
 * Return: Success (1), failure -1
 */

int clear_bit(unsigned long int *nmbr, unsigned int ind)
{
	if (ind > 63)
		return (-1);

	*nmbr = (~(1UL << ind) & *nmbr);
	return (1);
}

