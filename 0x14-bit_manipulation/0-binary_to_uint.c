#include "main.h"

/**
 * binary_to_uint - Converts binary numbers to unsigned int
 * @a: Binary number
 *
 * Return: Number converted
 */

unsigned int binary_to_uint(const char *a)
{
	int b;
	unsigned int dec_vl = 0;

	if (!a)
		return (0);

	for (b = 0; a[b]; b++)
	{
		if (a[b] < '0' || a[b] > '1')
			return (0);
		dec_vl = 2 * dec_vl + (a[b] - '0');
	}

	return (dec_vl);
}

