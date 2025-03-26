#include <stdio.h>

/**
 * main - Program prints all possible different combinations of two digits.
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{

		for (j = 49; j < 58; j++)
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);

				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
