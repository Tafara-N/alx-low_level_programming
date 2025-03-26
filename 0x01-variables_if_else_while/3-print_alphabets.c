#include <stdio.h>

/**
 * main - Program prints the alphabet in lowercase, and then in uppercase,
 *        using putchar().
 *
 * Return: int
 *       : Always 0 on success.
 */

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i = 0;

	while (i < 52)
	{
		putchar(letters[i]);

		i++;
	}

	putchar('\n');

	return (0);
}
