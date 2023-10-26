#include "main.h"

/**
 * clear_bit - Function sets the value of a given bit to 0
 * @n: Pointer to the number to change
 * @index: Bit index to clear
 *
 * Return: Success 1, for failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);

	return (1);
}

