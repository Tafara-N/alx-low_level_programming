#include "main.h"

/**
 * flip_bits - Exact number of bits you need to flip
 * @n: First number
 * @m: Second number
 *
 * Return: Bits to shift
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, tally = 0;
	unsigned long int curr;
	unsigned long int exclsv = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		curr = exclsv >> a;
		if (curr & 1)
			tally++;
	}

	return (tally);
}

