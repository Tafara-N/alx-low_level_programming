#include "main.h"

/**
 * main - Program prints: _putchar
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	char letters[] = "_putchar";

	int i;

	for (i = 0; i < 10; i++)
		_putchar(letters[i]);

	return (0);
}
