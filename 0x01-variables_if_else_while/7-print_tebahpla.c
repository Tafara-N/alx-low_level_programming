#include <stdio.h>

/**
 * main - Program prints the lowercase alphabet in reverse, using putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);

		i--;
	}

	putchar('\n');

	return (0);
}
