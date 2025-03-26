#include <stdio.h>

/**
 * main - Program prints all the numbers of base 16 in lowercase,
 *        using putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 48, j = 97;

	while (i <= 57)
	{
		putchar(i);

		i++;
	}

	while (j <= 102)
	{
		putchar(j);

		j++;
	}

	putchar('\n');

	return (0);
}
