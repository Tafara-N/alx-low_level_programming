#include "main.h"

/**
 * flip_bits - The number of bits you would need to flip
 * @nmbr: First number
 * @nmbr_ii: Second number
 *
 * Return: Number of bits to change
 */

unsigned int flip_bits(unsigned long int nmbr, unsigned long int nmbr_ii)
{
	int a, tally = 0;
	unsigned long int current;
	unsigned long int exclusive = nmbr ^ nmbr_ii;

	for (a = 63; a >= 0; a--)
	{
		current = exclusive >> a;
		if (current & 1)
			tally++;
	}

	return (tally);
}

