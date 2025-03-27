#include "main.h"

/**
 * _islower - Function checks whether the character is lowercase or not.
 *
 * @c: The character to be checked.
 *
 * Return: int
 *       : 1 if 'c' is lowercase. Otherwise 0.
 */

int _islower(int c)
{
	int lowercase = (c >= 97) && (c <= 122);

	return ((lowercase) ? 1 : 0);
}
