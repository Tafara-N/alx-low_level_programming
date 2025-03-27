#include "main.h"

/**
 * _isalpha - Function checks whether the character is alphabetic or not.
 *
 * @c: The character to be checked.
 *
 * Return: int
 *       : 1 if 'c' is either lowercase or uppercase. Otherwise 0.
 */

int _isalpha(int c)
{
	char uppercase = (c >= 65) && (c <= 90);
	char lowercase = (c >= 97) && (c <= 122);

	int true = lowercase || uppercase;

	return ((true) ? 1 : 0);
}
