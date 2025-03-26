#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, except letters 'e' and 'q',
 *        using putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if ((i != 101) && (i != 113))
		{
			putchar(i);
		}

		i++;
	}

	putchar('\n');

	return (0);
}
