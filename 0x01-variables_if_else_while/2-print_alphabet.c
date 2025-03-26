#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, using putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);

		i++;
	}

	putchar('\n');

	return (0);
}
