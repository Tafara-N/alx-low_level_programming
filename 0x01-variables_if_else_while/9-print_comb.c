#include <stdio.h>

/**
 * main - Program prints all possible combinations of single-digit numbers.
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}

		i++;
	}

	putchar('\n');

	return (0);
}
