#include "main.h"

/**
 * binary_to_uint - Function converts binary numbers to unsigned integer
 * @b: Binary number
 *
 * Return: Number converted
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_vl = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_vl = 2 * dec_vl + (b[a] - '0');
	}

	return (dec_vl);
}

