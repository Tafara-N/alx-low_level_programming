#include <stdio.h>

/**
 * main - Program prints all single digit numbers of base 10 starting from 0.
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);

		i++;
	}

	putchar('\n');

	return (0);
}
