#include "main.h"

/**
 * get_endianness - Function checks if a machine is little or big endian
 * Return: Big (0), little 1
 */

int get_endianness(void)
{
	unsigned int l = 1;
	char *b = (char *) l;

	return (*b);
}

